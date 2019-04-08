

const int MAXN=200;
 char a[MAXN+10][MAXN+10];

char getAChar(){
	int ch=getchar();
	while(ch!='#' && ch!='.' && ch!='@')ch=getchar();
	return ch;
}
int main()
{
	static int n,i,j,m,k,g,sum=0,temp1[MAXN*MAXN+10],temp2[MAXN*MAXN+10],r;
	
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			a[i][j]=getAChar();
	scanf("%d",&m);
    for(k=1;k<m;k++){
		r=1;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
				if(a[i][j]=='@')
				{
					temp1[r]=i;
					temp2[r]=j;
					r+=1;
				}
		}
		for(g=1;g<r;g++)
		{
			i=temp1[g];j=temp2[g];
			if(a[i+1][j]=='.') {a[i+1][j]='@';}
			if(a[i][j+1]=='.') {a[i][j+1]='@';}
			if(a[i-1][j]=='.') {a[i-1][j]='@';}
			if(a[i][j-1]=='.') {a[i][j-1]='@';}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]=='@'){sum+=1;}
		}
	}
	printf("%d\n",sum);

	return 0;
}
