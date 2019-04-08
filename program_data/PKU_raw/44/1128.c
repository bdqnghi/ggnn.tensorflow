void main()
{
	int a[6],b[6]={0},i,t,c,s,x;
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)
	{
		if(a[i]<0)
		{a[i]=-a[i];c=1;}
		else c=0;
		t=log(a[i]);s=t;
		while(s>=0)
		{
			x=a[i]/pow(10,s);
			b[i]+=x*pow(10,t-s);
			a[i]-=x*pow(10,s);
			s--;
		}
		if(c) b[i]=-b[i];
	}
	for(i=0;i<6;i++)
	{while(b[i]%10==0)
	b[i]=b[i]/10;
	printf("%d\n",b[i]);}
}