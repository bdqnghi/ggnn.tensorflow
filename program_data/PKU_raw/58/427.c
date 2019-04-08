int main()
{
	int n,i,j,k[200];																			//??????????????
	char str[200][81];																			//??????
	cin>>n;
	for(i=0;i<=n;i++)
		cin.getline(str[i],81,'\n');
	for(i=1;i<=n;i++)
	{
		k[i]=0;																					//????????0
		if(str[i][0]!=95&&(str[i][0]<65||str[i][0]>122||(str[i][0]>90&&str[i][0]<97)))
			continue;																			//?????????????
		else
			k[i]=1;																				//???????1
		for(j=1;j<=81;j++)
		{
			if(str[i][j]=='\0')
				break;																			//???????
			else if(str[i][j]!=95&&(str[i][j]<48||str[i][j]>122||(str[i][j]>57&&str[i][j]<65)||(str[i][j]>90&&str[i][j]<97)))
			{
				k[i]=0;																			//????????????0
				break;																			//????
			}
			else
				k[i]=1;																			//???????????1
		}
	}
	for(i=1;i<=n;i++)
		cout<<k[i]<<endl;
	return 0;
}