void main()
{
	int n,i,j,k;
	int str[100]={0};
	str[1]=1;
	str[2]=1;
	int a=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(a==1||a==2)
			printf("1\n");
		else
		{
		for(j=3;j<=a;j++)
			str[j]+=str[j-1]+str[j-2];
		printf("%d\n",str[a]);
		for(k=3;k<=a;k++)
			str[k]=0;
		}
	}
		
}
