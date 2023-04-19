#include <stdio.h>
int main()
{   double a11,a12,a13,a14,a21,a22,a23,a24,a31,a32,a33,a34,a41,a42,a43,a44,t;
	printf("本程序仅用于计算四阶行列式\n请从上到下一行一行或从左到右一列一列输入\n");
    scanf("%lf" "%lf" "%lf" "%lf" "%lf" "%lf" "%lf" "%lf" "%lf" "%lf" "%lf" "%lf" "%lf" "%lf" "%lf" "%lf" ,
	&a11,&a12,&a13,&a14,&a21,&a22,&a23,&a24,&a31,&a32,&a33,&a34,&a41,&a42,&a43,&a44) ;
    t=a11*a22*a33*a44-a11*a22*a34*a43-a11*a23*a32*a44+a11*a23*a34*a42+a11*a24*a32*a43-a11*a24*a33*a42-a12*a21*a33*a44
    +a12*a21*a34*a43+a12*a23*a31*a44-a12*a23*a34*a41-a12*a24*a31*a43+a12*a24*a33*a41+a13*a21*a32*a44-a13*a21*a34*a42-a13*a22*a31*a44
    +a13*a22*a34*a41+a13*a24*a31*a42-a13*a24*a32*a41-a14*a21*a32*a43+a14*a21*a33*a42+a14*a22*a31*a43-a14*a22*a33*a41-a14*a23*a31*a42+a14*a23*a32*a41;
    printf("结果是= %f",t);
	getchar();
	getchar();
 //by yhl email:yehaolongcs@163.com 
}

