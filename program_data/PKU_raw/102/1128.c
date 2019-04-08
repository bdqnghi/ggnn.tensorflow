int main()
{
	int n,i,m=0,f=0,j;
	
	char s[10];
	double x,ma[50]={0},fe[50]={0},t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("\n%s%lf",s,&x);
		if(s[0]=='m')	
		{
			ma[m]=x;
			m++;	
		}
		if(s[0]=='f')
		{
			fe[f]=x;
			f++;	
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<m-i-1;j++)
		{
				if(ma[j]>ma[j+1])
				{
					t=ma[j];
					ma[j]=ma[j+1];
					ma[j+1]=t;	
				}
		}	
	}
	
	for(i=0;i<f;i++)
	{
		for(j=0;j<f-i-1;j++)
		{
				if(fe[j]<fe[j+1])
				{
					t=fe[j];
					fe[j]=fe[j+1];
					fe[j+1]=t;	
				}
		}	
	}
	for(i=0;i<m;i++)
	{printf("%.2lf ",ma[i]);}
	for(i=0;i<f;i++)
	{
		if(i==f-1)
		printf("%.2lf",fe[i]);
		else
		printf("%.2lf ",fe[i]);	
	}

	return 0;			
}