int Test1(int n)
{
	int d=0,
	m=n;
	while (m)
	{
		d=d*10+m %10;
		m/=10;
	}
	return d ==n;
}
int Test2(int n)
{
int m = (int)sqrt(n);  
int i;
for(i=2;i<=m;i++)
if(n%i==0)
break;
if(i==m+1)
return 1;
else
return 0;
}
main()
{
int n,m;
int nCount = 0;
scanf("%d %d",&n,&m);
for(int i=n;i<=m;i++)
{
if(Test1(i)&&Test2(i))
{
if(nCount==0)
printf("%d",i);
else
printf(",%d",i);
nCount ++;
}
}
if(nCount == 0)
printf("no");
printf("\n");

}