int main()
{
	int a[100][100],q=0,n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		i=0;
for(j=0;j<n;j++)
		{
			i=0;
			while(a[i][j]!=0&&i<n)
			{
			i++;
			}
			i+=1;
			while(a[i][j]!=0&&i<n)
			{
			i++;
			q++;
			}
		}
printf("%d\n",q);
return 0;
}