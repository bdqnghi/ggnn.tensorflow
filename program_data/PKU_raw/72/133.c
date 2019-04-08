void main()
{
    int i,j,n,m,s[20][20],t=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&s[i][j]);
    if((s[0][0]>=s[0][1])&&(s[0][0]>=s[1][0]))
    printf("%d %d\n",t,t);
    for(i=1;i<n-1;i++)
    {
    	if((s[0][i]>=s[0][i+1])&&(s[0][i]>=s[1][i])&&(s[0][i])>=s[0][i-1])
    	printf("%d %d\n",t,i);
    }
    if((s[0][n-1]>=s[0][n-2])&&(s[0][n-1]>=s[1][n-1]))
    printf("%d %d\n",t,n-1);
    for(i=1;i<m-1;i++)
    {
    	if((s[i][0]>=s[i-1][0])&&(s[i][0]>=s[i][1])&&(s[i][0]>=s[i+1][0]))
    	printf("%d %d\n",i,t);
    	for(j=1;j<n-1;j++)
    	{
    	if((s[i][j]>=s[i][j-1])&&(s[i][j]>=s[i][j+1])&&(s[i][j]>=s[i-1][j])&&(s[i][j]>=s[i+1][j]))
    	printf("%d %d\n",i,j);
    	}
    	if((s[i][n-1]>=s[i][n-2])&&(s[i][n-1]>=s[i-1][n-1])&&(s[i][n-1]>=s[i+1][n-1]))
    	printf("%d %d\n",i,n-1);
    }
    if((s[m-1][0]>=s[m-2][0])&&(s[m-1][0]>=s[m-1][1]))
    printf("%d %d\n",m-1,t);
    for(i=1;i<n-1;i++)
    {
    	if((s[m-1][i]>=s[m-1][i+1])&&(s[m-1][i]>=s[m-2][i])&&(s[m-1][i])>=s[m-1][i-1])
    	printf("%d %d\n",m-1,i);
    }
    if((s[m-1][n-1]>=s[m-1][n-2])&&(s[m-1][n-1]>=s[m-2][n-1]))
    printf("%d %d",m-1,n-1);
    
}