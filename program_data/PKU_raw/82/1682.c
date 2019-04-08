int main(int argc, char* argv[])
{
	int n,sz[100][2],s[100],i,j=0,k=1,b=0,a[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&sz[i][0],&sz[i][1]);
		if(sz[i][0]>=90&&sz[i][0]<=140&&sz[i][1]>=60&&sz[i][1]<=90)
		{
			s[j]=i;
			j++;
		}
	}
	if(j==0)
		printf("0\n");
	if(j!=0)
	{
	s[j]=-1;
	for(i=0;i<j;i++)
	{
		if(s[i+1]==s[i]+1)
		{
			k++;
		}
		if(s[i+1]!=s[i]+1)
		{
			a[b]=k;
			b++;
			k=1;
		}
	}
	for(i=0;i<b-1;i++)
	{
		if(a[i]>a[i+1])
		{
			k=a[i+1];
			a[i+1]=a[i];
			a[i]=k;
		}
	}
	printf("%d\n",a[b-1]);
	}
	return 0;

}