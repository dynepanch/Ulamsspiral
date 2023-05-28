# Ulamsspiral


# Ulamsspiral.c

このコードは自然数を螺旋状に配置し素数のみをマーキングするコードです。

出力される図形はウラムの螺旋と呼ばれており、素数によって不思議な模様が描かれます。

デフォルトでは中心の値が41になっているので、オイラーの素数生成多項式である
$f(x)=$x^2+x+41
の値が一直線として表示されます。

# 導入から動作まで

導入方法

`git clone https://github.com/dynepanch/Ulamsspiral.git`

コンパイル

`gcc Ulamsspiral.c -o Ulamsspiral -lm`

実行

`./Ulamsspiral`


Ulamsspiral.c内のFIRST_NUMの数を変更することで中心の値を変更できます。


