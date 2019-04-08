int main()
{
	int n,j=-1,i,sz[100][2],time[100]={0},f=1,max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&sz[i][0],&sz[i][1]);
		if(sz[i][0]>=90&&sz[i][0]<=140&&60<=sz[i][1]&&sz[i][1]<=90&&f==1)
		{
			j++;
			time[j]++;
			f=0;
		}
		else if(sz[i][0]>=90&&sz[i][0]<=140&&60<=sz[i][1]&&sz[i][1]<=90)
		{
			time[j]++;
		}

		else{f=1;}

	}
	for(i=0;i<=j;i++)
	{
		if(max<time[i])
		{
			max=time[i];
		}
	}
	printf("%d",max);
	
	return 0;
}