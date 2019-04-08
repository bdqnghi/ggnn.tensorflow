struct st
{
	char nam[100];
	int scq;
	int scb;
	char gb;
	char xb;
	int lw;
};
void main()
{
	int n,i,a[1000]={0},b[1000],sum=0,j,t;
	struct st s[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		scanf("%s%d%d %c %c%d",s[i].nam,&s[i].scq,&s[i].scb,&s[i].gb,&s[i].xb,&s[i].lw);
	}
	for(i=0;i<n;i++)
	{
		b[i]=i;
		if(s[i].scq>80&&s[i].lw>=1)
			a[i]=a[i]+8000;
		if(s[i].scq>85&&s[i].scb>80)
			a[i]=a[i]+4000;
		if(s[i].scq>90)
			a[i]=a[i]+2000;
		if(s[i].scq>85&&s[i].xb=='Y')
			a[i]=a[i]+1000;
		if(s[i].scb>80&&s[i].gb=='Y')
			a[i]=a[i]+850;
		sum=sum+a[i];
	}
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j+1];a[j+1]=a[j];a[j]=t;
				t=b[j+1];b[j+1]=b[j];b[j]=t;
			}
		}
	}
	printf("%s\n",s[b[0]].nam);
	printf("%d\n%d\n",a[0],sum);
}



