
const int MAXN=10000;
 char a[MAXN+10][MAXN+10];
int main()
{
	static int n,i,j,m,k,g,sum=0,temp1[MAXN+10],temp2[MAXN+10],r;
	
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
	cin>>m;
    for(k=1;k<m;k++)
		{r=1;
	     for(i=1;i<=n;i++)
		   {for(j=1;j<=n;j++)
			   if(a[i][j]=='@')
			   {temp1[r]=i;temp2[r]=j;r+=1;}}
        for(g=1;g<r;g++)
			{i=temp1[g];j=temp2[g];
		     if(a[i+1][j]=='.') {a[i+1][j]='@';}
			 if(a[i][j+1]=='.') {a[i][j+1]='@';}
			 if(a[i-1][j]=='.') {a[i-1][j]='@';}
			 if(a[i][j-1]=='.') {a[i][j-1]='@';}}}
   for(i=1;i<=n;i++)
		{for(j=1;j<=n;j++)
	      {if(a[i][j]=='@'){sum+=1;}}}
	cout<<sum<<endl;

    return 0;
}
