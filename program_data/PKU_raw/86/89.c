void main()
{
	int n,a,i,j,b[20],no[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a>0) 
		{
			for(j=1;j<=a;j++) scanf("%d",&b[j]);
			for(j=0;j<a;j++)
			{
				if(b[a-j]+3*(a-j)<=62) break;
			}
			if(j==a) no[i]=60-3*a;
			else if(b[a-j]+3*(a-j)>=60) no[i]=b[a-j];
			else no[i]=60-3*(a-j);
		}
		else no[i]=60;
	}
	for(i=0;i<n;i++) printf("%d\n",no[i]);
}