int main(){
	int n,k[101],i,q[101],j=0,m=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&k[i],&q[i]);
	}
	for(i=0;i<n;i++)
	{
		if(k[i]<=140&&k[i]>=90&&q[i]<=90&&q[i]>=60)
		{
			j++;
		}
		else
		{
			if(j>m)
			{
				m=j;
				j=0;
			}
			else
			{
				j=0;
			}
		}
	}
	if(j>m)
			{
			printf("%d",j);
			}
			else
			{
printf("%d",m);
			}
	return 0;
}
