int main()
{
	char ch[510];
	int a[125000][3];//??????
	int n=0,m=0;
	int i=0,j=0,k=0;
	cin.getline(ch,510,'\n');
	while(ch[n]!='\0')//???????
		n++;
	for(k=0;k<n;k++)//??????
		for(i=k+1;i<n;i++)
		{
			int count=0;
			for(j=k;j<=i;j++)
				if(ch[j]==ch[k+i-j])
					count++;
			if(count==i-k+1)//???????
			{
				a[m][1]=k;//????
				a[m][2]=i;//????
				a[m][0]=i-k+1;//??
				m++;//????????
			}
		}
	for(k=0;k<m-1;k++)//?????
		for(i=0;i<m-1-k;i++)
			if(a[i][0]>a[i+1][0])
			{
				int t=0;
				t=a[i][0];a[i][0]=a[i+1][0];a[i+1][0]=t;
				t=a[i][1];a[i][1]=a[i+1][1];a[i+1][1]=t;
				t=a[i][2];a[i][2]=a[i+1][2];a[i+1][2]=t;
			}
	for(k=0;k<m;k++)
	{
		for(i=a[k][1];i<=a[k][2];i++)
			cout<<ch[i];
		cout<<'\n';
	}
	return 0;
}