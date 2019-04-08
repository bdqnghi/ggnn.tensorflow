void main()
{
	int a[15]={1},n,m,i,j,t;
	scanf("%d",&a[0]);
	while(a[0]!=-1)
	{
		i=1;n=1;
		scanf("%d",&a[1]);
		while(a[i]!=0)
		{
			n++;
			i++;
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
				if(a[i]>a[j])
				{
					t=a[i];
					a[i]=a[j];
					a[j]=t;
				}

/*for(i=0;i<n;i++)printf("%d ",a[i]);
printf("\n");*/
				 m=0;
				for(i=0;i<n;i++)
					for(j=i+1;j<n;j++)
					if(a[j]==2*a[i])
					{
						m++;
						break;
					}
					printf("%d\n",m);
scanf("%d",&a[0]);
	}
}
