int mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int day(int m)
{
	int day=0,i;
	for (i=1;i<m;i++)
		day=day+mon[i];
	day=day+13;
	return (day);
}
int main()
{
	int i,a;
	scanf("%d",&a);
	for(i=1;i<13;i++)
		if((a+day(i)-1)%7==5)printf("%d\n",i);
	return 0;
}
