/* Note:Your choice is C IDE */
void main()
{int a[200][200],n,m,j,i,k;
	for(i=0;i<200;i++)
	for(j=0;j<200;j++)
	a[i][j]=-32767;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(k=0;k<m+n-1;k++)
    for(i=k;i>=0;i--)
    {if(a[k-i][i]!=-32767)
    	printf("%d\n",a[k-i][i]);}
}