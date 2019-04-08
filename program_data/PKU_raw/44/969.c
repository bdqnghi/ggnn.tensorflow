int reverse(int num)
{
	int n=0,m=0,i,s,l=1,x=1;
	s=num;
	do
	{
		s=s/10;
		n=n+1;
		l=10*l;
	}while(s>0);
	for(i=1;i<=n;i++)
	{   
		m=num/(l/10)*x+m;
		num=num-num/(l/10)*(l/10);
		x=x*10;
		l=l/10;
	}
	return(m);
}
void main()
{
	int a[6],j;
	for(j=0;j<6;j++)
		scanf("%d",&a[j]);
	for(j=0;j<6;j++)
	{
		if(a[j]!=0)
		{
			while(a[j]%10==0) a[j]=a[j]/10;
			if(a[j]>0) printf("%d\n",reverse(a[j]));
			else printf("%d\n",-reverse(-a[j]));
		}
		if(a[j]==0) printf("0\n");
	}
}