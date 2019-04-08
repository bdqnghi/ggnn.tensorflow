	char str[100][100000]={0};
int main()
{
	int t,i;

	cin>>t;
	for(i=0;i<t;i++)
	{
		int length,j,judge;
		cin>>str[i];
		for(length=0;;length++)
		{
			if(str[i][length]=='\0') break;
		}
		for(j=0;j<length;j++)
		{
			for(int back=0;back<j;back++)
			{
				if (str[i][back]==str[i][j]) 
					goto endthischar;
			}
			
			judge=0;
			for(int k=j+1;k<length;k++)
			{
				if(str[i][k]==str[i][j])
				{judge++;break;}
			}
			if(judge==1) continue;
			else
			{
				cout<<str[i][j]<<endl;
				goto endthisline;
			}
	endthischar:;
		}
		if(j==length) cout<<"no"<<endl;
		endthisline: ;
	}

	return 0;
}