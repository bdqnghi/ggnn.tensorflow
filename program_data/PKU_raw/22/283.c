void main()
{
	int a[3000]={0},num[3000]={0};
	char c[3000]={0};
	int i,j,temp;
	int n=0,m=0;
	int sum;
	scanf("%s",c);
	for(i=0;i<300;i++)
	{
		if(c[i]>='0'&&c[i]<='9')
		{
			a[n]=c[i];
			n++;
		}
		else
		{
			sum=0;
			if(n!=0)
			{
				for(j=0;j<n;j++)
				{
					sum=sum*10+a[j]-48;
				}
				num[m]=sum;
				m++;
				n=0;
			}
		}
	}
	for(j=2;j<m+1;j++)
	{
		for(i=0;i<=m-j;i++)
			if(num[i]<num[i+1])
			{
				temp=num[i];
				num[i]=num[i+1];
				num[i+1]=temp;
			}
	}
	for(i=1;i<m;i++)
		if(num[i]!=num[i-1])
		{
			printf("%d\n",num[i]);
			break;
		}
	if(num[0]==num[m-1])
		printf("No\n");
}
