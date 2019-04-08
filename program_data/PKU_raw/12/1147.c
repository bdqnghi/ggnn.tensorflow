void main()
{
	int b;
	scanf("%d",&b);
	while(b!=-1)
	{
		int a[15]={0};
		int i=1;
		int k,j;
        int sum=0;
		a[0]=b;
		scanf("%d",&a[i]);
		while(a[i]!=0)
		{
			i++;
			scanf("%d",&a[i]);
		}
		for(k=0;k<i;k++)
		{
			for(j=k+1;j<i;j++)
			{
				if(a[j]==2*a[k]||a[k]==2*a[j])
					sum++;
			}
		}
        printf("%d\n",sum);
		scanf("%d",&b);
	}		
}