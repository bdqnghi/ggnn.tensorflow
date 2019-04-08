int su(int num)
{
	int i;
	for(i=2;i<num;i++)
		if(num%i==0) return(0);
	return(1);
}
int hui(int num)
{
	int a,b=0;
	a=num;
	while(num!=0)
	{
		b=b*10+num%10;
		num/=10;
	}
	if(a==b) return(1);
	else return(0);
}
void main()
{
	int m,n,flag=0,i,a[20],k=0;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
		if(su(i)==1&&hui(i)==1)
		{
			flag=1;
			a[k++]=i;
		}
	if(flag==0) printf("no");
	else
	{
		for(i=0;i<k-1;i++) printf("%d,",a[i]);
		printf("%d",a[i]);
	}
}

