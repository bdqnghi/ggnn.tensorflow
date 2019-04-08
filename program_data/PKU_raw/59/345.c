
void main()
{
	int n,i,j,m,flag=0;
	char a[100][100]={'\0'};
	char s[100],t[100];
    gets(s);
	n=atoi(s);
	for(i=0;i<n;i++)
		gets(a[i]);
	gets(t);
	m=atoi(t);
//	printf("%d %d\n",n,m);
	for(;m>1;m--)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='@')
				{
					if(i!=0 && a[i-1][j]=='.')
						a[i-1][j]='$';
					if(j!=0 && a[i][j-1]=='.')
						a[i][j-1]='$';
					if(j!=(n-1) && a[i][j+1]=='.')
						a[i][j+1]='$';
					if(i!=(n-1) && a[i+1][j]=='.')
						a[i+1][j]='$';

				}
			}
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(a[i][j]=='$')
					a[i][j]='@';


	}
    for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(a[i][j]=='@')
				flag++;
	printf("%d",flag);
}

