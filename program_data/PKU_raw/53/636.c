void main()
{
	int n,i,j,flag;
	int a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf(" %d",&a[i]);
		if(i==0)
		{printf("%d",a[0]);}
		for(j=0;j<i;j++)
		{

			if(a[i]==a[j])
			{flag=0;break;}
			else
				flag=1;	
		}
		if(flag==1)
			printf(",%d",a[i]);
	}
}

