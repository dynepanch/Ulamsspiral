//SPDX-FileCopyrightText: 2023 Ken Inaba rightman20020920@yahoo.co,jp
//SPDX-Licence-Identifire: BSD-3-Clause
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX 50000
#define FIRST 0
#define NEXT		1
#define qbe_size 51

unsigned int hurui(int Num,int pat);
unsigned int sosuu_hantei(unsigned int );

unsigned int hurui(int Num,int pat){
	int i,j,cnt=0,num=0;
	static unsigned int sosuu[MAX+1];
	
	switch(pat){
		case 0:
			for(i=0;i<MAX;i++){
				sosuu[i]=0;
			}
			for(i=2;i<MAX;i++){
				for(j=2;j<=i;j++){
					if(i%j==0){
						cnt++;
					}
					if(cnt>1){
						break;
					}
				}
				if(cnt==1){
					sosuu[num]=i;
					num++;
				}
				cnt=0;
			}
			
			
		break;
		
		case 1:
			return sosuu[Num];
		break;
		
	}
	
}

unsigned int sosuu_hantei(unsigned int moto){
	int i,ans=0,cnt=0;
	for(i=0;i<moto;i++){
		if(moto==hurui(i,1)){
			ans=1;
			break;
		}
	}
	return ans;
}

void puts_qbe(unsigned int a){
	
	if(sosuu_hantei(a)==1){
		printf("■");
	}else{
		printf("□");
	}
}

void print_spiral(void) {
    int out[qbe_size][qbe_size],i,j,k;
    static int x=0,y=0,sou=0;
    int kaisou_MAX,MAX_NUM,MINI_NUM;
    i=0;
    MINI_NUM=41;
    MAX_NUM=qbe_size*qbe_size+MINI_NUM-1;
    //printf("%d,%d,",x,y);
    kaisou_MAX=qbe_size/2+1;
   	for(sou=0;sou<kaisou_MAX;sou++){
   		 for(j=0;x<qbe_size-sou-1;j++){
   		 	out[x][y]=MAX_NUM-i;
   		 	x++;
   		 	i++;
   		 	//printf("%d,%d,",x,y);
   		 }
   		//printf("\n");
   		for(j=0;y<qbe_size-sou-1;j++){
   		 	out[x][y]=MAX_NUM-i;
   		 	y++;
   		 	i++;
   		 	//printf("%d,%d,",x,y);
   		 }
   		//printf("\n");
   		for(j=0;x>sou;j++){
   	 		out[x][y]=MAX_NUM-i;
   	 		x--;
   		 	i++;
    		//printf("%d,%d,",x,y);
   		}
   		//printf("\n");
   		for(j=0;y>sou+1;j++){
   		 	out[x][y]=MAX_NUM-i;
   		 	y--;
   		 	i++;
   		 	//printf("%d,%d,",x,y);
   		}
   		//printf("\n");
   	}
   	out[x][y]=MAX_NUM-i;
   	for(i=0;i<qbe_size;i++){
   		for(j=0;j<qbe_size;j++){
  	 		printf("%d,",out[j][i]);
   		}
   		printf("\n");
   	}
   	for(i=0;i<qbe_size;i++){
   		for(j=0;j<qbe_size;j++){
  	 		puts_qbe(out[j][i]);
   		}
   		printf("\n");
   	}
   	
}

int main(void){
	int i=0;
	hurui(0,0);
	print_spiral();
	printf("\n");
}
