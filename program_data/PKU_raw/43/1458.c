int main()
{
	int i,j,k=2,t,su=1,put,temp,a[20000];
	a[0]=2;a[1]=3;
	for(i=4;i<10000;i++)
	{
		su=1;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)su=0;
		}
		if(su==1){a[k]=i;k++;}
	}
	scanf("%d",&put);
	for(i=1;i<2000;i++)
	{
		temp=put-a[i];
		for(t=i;t<2000;t++)
		{
			if(a[t]==temp)
			{
				printf("%d %d\n",a[i],a[t]);
			}
			if(a[t]>temp)break;
		}
	}
	return 0;
}




