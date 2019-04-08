int main()
{
	int n,i,j,k,p;
	cin>>n;
	char a[1000][100];
	for(i=1;i<=n+1;i++)
	{
		cin.getline(a[i],100);
		if(i==1)continue;
		else{p=1;
		k=strlen(a[i]);
		if(((a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z')||(a[i][0]=='_'))==0)

			p=0;

		else { for(j=1;j<k;j++)
			if(((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]=='_')||(a[i][j]>='0'&&a[i][j]<='9'))==0)

			p=0;


		}
	}
		if(p==1)cout<<'1'<<endl;
		else if(p==0)cout<<'0'<<endl;
	}
	return 0;


}