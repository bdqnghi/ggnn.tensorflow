int main()
{
	int n,i,num[100000],j,grade1[100000],grade2[100000],grade[100000],t1,t2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&num[i],&grade1[i],&grade2[i]);
		grade[i]=grade1[i]+grade2[i];
	}
	for(j=1;j<4;j++)
	{
		for(i=0;i<n-j;i++)
		{
			if(grade[i]>=grade[i+1])
			{
				t1=grade[i];
				grade[i]=grade[i+1];
				grade[i+1]=t1;
				t2=num[i];
				num[i]=num[i+1];
				num[i+1]=t2;
			}
		}
	}
	printf("%d %d\n%d %d\n%d %d",num[n-1],grade[n-1],num[n-2],grade[n-2],num[n-3],grade[n-3]);
}