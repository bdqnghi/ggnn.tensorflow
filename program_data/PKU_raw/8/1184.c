int f(int zhengshuchuan[],int changdu)
{
	int i,j,t;
	for(i=0;i<changdu;i++)
	{
		for(j=i;j<changdu;j++)
		{
			if(zhengshuchuan[i]>zhengshuchuan[j])
			{
            t=zhengshuchuan[i];
			zhengshuchuan[i]=zhengshuchuan[j];
			zhengshuchuan[j]=t;
			}
		}
	}
	return 0;
}
main()
{
	int a[200],b[100],i;
	int changdu1,changdu2;
	scanf("%d %d",&changdu1,&changdu2);
	for(i=0;i<changdu1;i++)
	{
          scanf("%d",&a[i]);
	}
		for(i=0;i<changdu2;i++)
	{
          scanf("%d",&b[i]);
	}
		f(a,changdu1);
		f(b,changdu2);
		for(i=0;i<changdu2;i++)
	{
			a[changdu1+i]=b[i];
		}
	
		for(i=0;i<changdu1+changdu2;i++)
		{
			if(i==0)
				printf("%d",a[0]);
		else	printf(" %d",a[i]);
		}
	return 0;
}