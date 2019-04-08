int main()
{
	int m,n,i,j,a[8][8],max,lie,k;
	scanf("%d,%d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<m;i++)
	{
		max=a[i][0];lie=0;
		for(j=1;j<n;j++)	if(a[i][j]>max)  { max=a[i][j];lie=j;}
		for(k=1;k<m;k++)	if(a[i][lie]>=a[k][lie]) break;
		if(k==m)	{printf("%d+%d",i,lie);break;}
	}
	if(i>=m) printf("No");
	return 0;
}