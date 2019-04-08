void main()
{
	void pai(int na,int nb);
	int na,nb;
	scanf("%d%d",&na,&nb);
	pai(na,nb);

}

void pai(int na,int nb)
{
	int t,i,j,a[200],b[100];
	for(i=0;i<na;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<nb;i++)
	{
		scanf("%d",&b[i]);
	}

	for(j=0;j<na-1;j++)
	{
		for(i=0;i<na-1-j;i++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}

	for(j=0;j<nb-1;j++)
	{
		for(i=0;i<nb-1-j;i++)
		{
			if(b[i]>b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
		}
	}
	
	for(j=0;j<na;j++)
		printf("%d ",a[j]);
	for(j=0;j<nb-1;j++)
		printf("%d ",b[j]);
	printf("%d\n",b[nb-1]);
	


}

