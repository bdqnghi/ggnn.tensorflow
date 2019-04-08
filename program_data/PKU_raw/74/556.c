int b=0;
void main()
{
	int m,n,i,j,k,a[100]={0},I,t;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j!=0) k=1;
			else { k=0;break;}
		}
		if(k==1)
		{
			I=0;t=i;
			while(t>0)
			{  I=I*10+t%10;t=t/10;}
			if(I==i)
			{   a[b]=i;b++;}
		}
	}
	if(a[0]==0)
		printf("no\n");
	else
	{
		for(i=0;a[i+1]!=0;i++)
		     printf("%d,",a[i]);
		printf("%d\n",a[i]);
	}
}