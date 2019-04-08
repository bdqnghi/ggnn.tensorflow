int su(int);
int main()
{
int m,i;
scanf("%d",&m);
for(i=3;i<=m/2;i+=2)
{
if(su(i)&&su(m-i))
	printf("%d %d\n",i,m-i);
}
return 0;
}
int su(int a)
{
int j;
for (j=2;j<=a/2;j++)
{
	if(a%j==0)
   { return 0;
	break;}
	if(j==a/2)
		return 1;
}
}
