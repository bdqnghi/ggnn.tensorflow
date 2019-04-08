void main()
{
	int n,i,result[100],sum=0;
	char str[100][20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a,b,c,R[5];
		char c1,c2;
		scanf("%s %d %d %c %c %d",str[i],&a,&b,&c1,&c2,&c);
		R[0]=(a>80&&c>=1)? 8000:0;
		R[1]=(a>85&&b>80)? 4000:0;
		R[2]=(a>90)? 2000:0;
		R[3]=(a>85&&c2=='Y')? 1000:0;
		R[4]=(b>80&&c1=='Y')? 850:0;
		result[i]=R[0]+R[1]+R[2]+R[3]+R[4];
	}
	int t=0,big=result[0];
	for(i=0;i<n;i++)
	{
		sum+=result[i];
		if(result[i]>big)
		{
			big=result[i];
			t=i;
		}
	}
	printf("%s\n%d\n%d\n",str[t],result[t],sum);
}