
int main(int argc, char* argv[])
{
	int n,shu[100],i,j,a=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&shu[i]);
	}
	for(i=1;i<3;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(shu[j]>shu[j+1])
			{
				a=shu[j];
				shu[j]=shu[j+1];
				shu[j+1]=a;
			}
		}
	}
	for(i=1;i<3;i++)
	{
		printf("%d\n",shu[n-i]);
	}
	return 0;
}
