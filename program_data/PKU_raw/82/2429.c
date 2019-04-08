int main()
{
	int n,s[100][2],i,j,a[100]={0},m=0,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&s[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		if(s[i][0]>=90&&s[i][0]<=140&&s[i][1]>=60&&s[i][1]<=90){
			a[m]++;
		}else{
			m++;
		}
	}
	b=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>b){
			b=a[i];
		}
	}
	printf("%d",b);
	return 0;
}
