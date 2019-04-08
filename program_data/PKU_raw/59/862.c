int main ()
{
	int n,m,i,j,k; 
	int num=0; 
	char a[110][110][110]={0};
	cin>>n;
	for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
	cin>>a[i][j][0];
	if(a[i][j][0]=='#')
	   a[i][j][0]=0;
	if(a[i][j][0]=='.')
	   a[i][j][0]=1;
	if(a[i][j][0]=='@')
	   a[i][j][0]=2;
    }}
	cin>>m;
	for(i=1;i<=m-1;i++){
    for(j=1;j<=n;j++){
	for(k=1;k<=n;k++){
	if (a[j][k][i-1]==0||a[j][k][i-1]==2)
		a[j][k][i]=a[j][k][i-1]; 
	else
	{
	if(a[j+1][k][i-1]==2 || a[j-1][k][i-1]==2 || a[j][k+1][i-1]==2 || a[j][k-1][i-1]==2) 
			a[j][k][i]=2;
	else
			a[j][k][i]=1;
	}}}}

	for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
	if (a[i][j][m-1]==2)
		num++; 
	}}
	cout<<num; 
	return 0;
}