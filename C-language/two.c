#include <stdio.h>
int main()
{
	int a=5,b,c,d,e,f;
	b= a+2; //7
	c= b-a; //2
	d= a*c; //10
	e= a/d; //整型：0.5 = 0;小数抹掉 
	f= a%d; //5 
	return 0;
}

#include <stdio.h>
int main()
{
	double a,b,c,s;
	b=3.67;
	b=5.43;
	c=6.21;
	s=(a+b+c)/2;
	return 0;
}

#include <stdio.h>
int main()
{
	char a='B',b='0',c='Y';
	a=a+32; //'b' a+=32;
	b=b+32; //'o' b+=32;
	c=c+32; //'y' c+=32;
	return 0;
}
//加减的是数值为ASCII码;
//大小写字母+-32转换;

#include <stdio.h>
int main()
{
	int a=5,b,c,d,e,f;
	b= a+2;
	c= b-a;
	d= a*c;
	e= a/d;
	f= a%d;
	printf("a=%d,b=%d,c=%d\n",a,b,c );
	printf("e=%e,f=%f\n",e,f );
}

//求123 和 456的和
#include <stdio.h>
int main()
{
	int a,b,c;
	a=123;
	b=456;
	c=a+b;
	printf('a+b和是%d\n',c);
	return 0;
}

#include <stdio.h>
int main()
{
	double a,b,c,s;
	b=3.67;
	b=5.43;
	c=6.21;
	s=(a+b+c)/2;
	printf("设定的a是%f,b是%f,c是%f\n",a,b,c );
	printf("求得的s是%f\n",s );
	return 0;
}

#include <stdio.h>
int main()
{
	char a='B',b='0',c='Y';
	a=a+32; 
	b=b+32; 
	c=c+32; 
	printf("小写字母依次是%c%c%c\n",a,b,c );
	return 0;
}

#include <stdio.h>
int main()
{
	char a='o',b='y',c='r',d='a';
	a=a+1;
	b=b+1;
	c=c+1;
	d=d+1;
	printf("加密后的名字是%c%c%c%c\n",a,b,c,d );
	return 0;
}

#include <stdio.h>
int main()
{
	int a,b,s;
	scanf("%d,%d",&a,&b);//键盘键入两个数
	s= (a+b)/2;
	printf("%d和%d的平均数为%d\n",a,b,s );
	return 0;
}

//float 型
//float a,b;
//scanf("%f,%f",&a,&b);
//double 型
//double a,b;
//scanf("%lf,%lf",&a,&b);
//char型
//char a,b;
//scanf("%c,%c",&a,&b);

// 用scanf语句输入大写字母,输出小写字母
#include <stdio.h>
int main()
{
	char a,b;
	printf("请输入大写字母：\n");
	scanf("%c",&a);
	b=a+32;
	printf("%c输出小写字母是%c\n",a,b );
	return 0;
}

//putchar()、getchar();
#include <stdio.h>
int main()
{
	char a,b,c;
	a = getchar();//把键盘输入的键值赋值给a
	b = getchar();
	c = getchar();
	a = a+32;
	b = b+32;
	c = c+32;
	putchar(a); //屏幕里显示a
	putchar(b);
	putchar(c);
	putchar('\n');//输出型语句最后必须有换行符
	return 0;
}

// e^x 、log数学运算
//abs 整数x绝对值 int x; abs(x);
//fabs x的绝对值  double x; fabs(x);
//sin  sinx  double x; sin(x);
//cos  cosx  double x; cos(x);
//tan  tanx  double x; tan(x);
//exp  e^x   double x; exp(x);
//pow  x^y   double x; pow(x,y);
//sqrt x^1/2 double x; sqrt(x);
//log  lnx   double x; log(x);
//log10 lgx  double x; log10(x);

#include <stdio.h>
#include <math.h>
int main()
{

	return 0;
}

//给出三角形的三边a,b,c的长，利用公式
//area = (s(s-a)(s-b)(s-c))^1/2;
//求出三角形的面积area(s=(a+b+c)/2);

#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,s,area;
	scanf('%lf,%lf,%lf',&a,&b,&c);
	s=(a+b+c)/2;
	area = sqrt(s*(s-a)(s-b)(s-c));
	printf("a=%lf\tb=%lf\tc=%lfn",a,b,c);
	printf("area=%lf\n",area );
	return 0;
}

//利用公式x1,2= (-b+-(b^2-4ac)^1/2)/2a
//求 a^2+bx+c = 0 的两个根，a，b,c键盘输入
//且 b^2 - 4ac>0;
#include <stdio.h>
#include <math.h>
int main()
{
   double a,b,c,d,x1,x2;
   scanf("%lf,%lf,%lf",&a,&b,&c);
   d =sqrt(b*b-4*a*c);
   x = (-b+d)/(2*a);
   y = (-b-d)/(2*a);
   printf("a=%lf\ta=%lf\ta=%lf\n",a,b,c);
   printf("x1=%lf\tx2=%lf\n",x,y);
   return 0;
}

//若小明的年薪增长率为-10%,请用公式 p=(1+r)^n;
//计算小明10年后和今年相比增长了多少。
//r为年增长率，n为年数，p为与今年相比的倍数
#include <stdio.h>
#include <math.h>
int main()
{
	double p,r,n;
	r=-0.1;
	n=10;
	p=pow(1+r,n);
	printf("p=%lf\n",p );
	return 0; 
}

//三个小知识点
//%m.nf
#include <stdio.h>
int main()
{
	double a,b,c;
	a=3.67;
	b=5.43;
	c=6.21;
	printf("设定的a是%5.2lf, b是%-5.2lf, c是%7.4lf\n",a,b,c);
	//设定的a是 3.67，b是5.43 ，c是 6.2100;
}
//%e 以科学计数法的方式输出结果;
#include <stdio.h>
int main()
{
	printf("小明的身高是%e厘米\n",123.456 );
    //小明的身高是1.23456e+002厘米;
	return 0;
}

#include <stdio.h>
int main()
{
	printf("小明的身高是%10.2e厘米\n",123.456 );
    //小明的身高是 1.23e+002厘米;
	return 0;
}
//(int)(表达式) 将表单式强制转化成整型(抹掉表达式中的小数部分)
// 9999.999 =>　9999.999/1000 = 9
// float a=9999.999;
// int b;
// b=(int)(a/1000);
// 
// 输入一个大于0小于999的可以带小数的数字，
// 并输出其个位、十位、以及百位数字。

#include <stdio.h> 
int main()
{
	double a;
	int ge,shi,bai;
	scanf("%lf",&a);
	bai = (int)(a/100);
	shi= (int)((a-bai*100)/10);
	ge = (int)(a-bai*100-shi*10);
	printf("个位数字是%d\n",ge );
	printf("十位数字是%d\n",shi );
	printf("百位数字是%d\n", bai);
	return 0;
}