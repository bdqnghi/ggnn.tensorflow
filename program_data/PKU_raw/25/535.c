
int main()
{
	char num[101][200];
	int temp[200];
	int n,i,j=1,k,t;
	for ( i=0;i<200;i++ )
	{
		temp[i]=0;
	}
	cin>>n;
	num[0][0]='1';
	num[0][1]='\0';
	for ( i=1;i<n+1;i++ )
	{
		for ( t=0;t<200;t++ )
		{
			temp[t]=0;
		}
		for (j=0;num[i-1][j]!='\0';j++ )
		{
			temp[j]=(num[i-1][j]-'0')*2;
		}
		for ( k=0;num[i-1][k]!='\0';k++ )
		{
			if ( temp[k]>=10 )
			{
				temp[k+1]+=temp[k]/10;
				temp[k]=temp[k]%10;
			}
		}
		num[i][0]=temp[0]+'0';
		for ( j=1;( num[i-1][j]!='\0') && j<200 ;j++ )
		{
			num[i][j]=temp[j]+'0';
		}
		if ( temp[j] != 0 )
		{
			num[i][j]=temp[j]+'0';
			j++;
		}
		num[i][j]='\0';
	}
	for ( j=j-1;j>=0;j-- )
	{
		cout<<num[n][j];
	}
	cout<<endl;
	return 0;
}