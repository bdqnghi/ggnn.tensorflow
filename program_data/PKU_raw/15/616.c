int main(int argc, char* argv[])
{
	int i,j,n,s,b=0,c=0,d=0,e=0;
	scanf("%d",&n);
	int a[100][100];
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if (a[i][j]==0)
			{
				b=j;
				c=i;
				goto loop;
			}
		}
	}loop:
	for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
		{
			if (a[i][j]==0)
			{
				d=j;
				e=i;
				goto end;
			}
		}
	}end:
	s=(e-c-1)*(d-b-1);
	printf("%d\n",s);
	return 0;
}