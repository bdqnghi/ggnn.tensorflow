void main()
{
	int num[300];
	int n,term,i,j,k;
	char c[300];
	for(i=0,n=0;c[i-1]!='\n' && i<300;i++,n++)
	{
		scanf("%d%c",&num[i],&c[i]);
	}
	if(n<=1) printf("No\n");
	else
	{
		for(i=1;i<n;i++)
		{
			if(num[i]!=num[0]) break;
		}
		if(i==n) printf("No\n");
		else
		{
			for(i=0;i<n;i++)
			{	
				k=i;
				for(j=i+1;j<n;j++)
					{
						if(num[j]>num[k]) k=j;
					}
				if(k!=i) {term=num[i];num[i]=num[k];num[k]=term;}
			}
			for(i=1;i<n;i++)
			{
				if(num[i]!=num[0])	{printf("%d\n",num[i]);break;}
			}
		}
	}
}