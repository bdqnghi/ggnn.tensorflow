int main()
{
	int n;
	scanf ("%d",&n);
	int a[1000][1000];
	int b,start1,start2,end1,end2;
	b=0;
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			scanf ("%d",&a[i][j]);
			if (a[i][j]==0&&b==0)
			{
				start1=i+1;
				start2=j+1;
				b=1;
			}
			if (a[i][j]==0&&b==1)
			{
				end1=i+1;
				end2=j+1;
			}
		}
	}
	int area;
	area=(end1-start1-1)*(end2-start2-1);
	printf("%d",area);
	return 0;
}

