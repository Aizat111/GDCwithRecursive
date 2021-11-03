#include<stdio.h>
int obeb(int a,int b)
{
	if(b==0) return a;
	else return obeb(b,a%b);
}
int main()
{
	int s1,s2;
	do
	{
	printf("1.sayinizi giriniz:");
	scanf("%d",&s1);
	printf("2.sayinizi giriniz:");
	scanf("%d",&s2);
	}
	while(s1<=0||s2<=0);	
	if(s1>s2)
	printf("OBEB(%d,%d)=%d",s1,s2,obeb(s1,s2));
	else
	printf("OBEB(%d,%d)=%d",s2,s1,obeb(s2,s1));
	return 0;

}
