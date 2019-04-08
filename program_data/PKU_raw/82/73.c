int main()
{
	int i,m,j=0,k,max=0;
	int a[100],b[100];
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<k;i++)
	{
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
		{
			j=1;
			for(m=i+1;m<k;m++)
			{
				if(a[m]>=90&&a[m]<=140&&b[m]>=60&&b[m]<=90)
					j=j+1;
				else
				{
					j=j;
					break;
				}
			}
		}
		if(j>max) max=j;
		j=0;
	}
	printf("%d",max);
	return 0;
}