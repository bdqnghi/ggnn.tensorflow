int main()
{
	int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y[200],m[200],d[200],i,c[200],e[200],n,j;
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%d%d%d",&y[j],&m[j],&d[j]);
	
	if(((y[j]%4==0)&&(y[j]%100!=0))||(y[j]%400==0))
	{
		days[2]++;
	}
	c[j]=0;
	e[j]=0;
	for(i=0;i<m[j];i++)
	{
		c[j]+=days[i];
	}
	for(i=0;i<d[j];i++)
	{
		e[j]+=days[i];
	}
	if((c[j]-e[j])%7==0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	days[2]=28;
	}
	return 0;
}