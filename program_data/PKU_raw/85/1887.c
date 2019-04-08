//??C???
int main()
{
	char a[100][20];
	int n,i,j;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		for (j=0;a[i][j]!='\0';j++)
		{
			if (j==0)//???????
			{
				if ((a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z')||a[i][0]=='_')
					continue;
				else
				{
					cout<<"no"<<endl;
					break;
				}
			}
			else//????????
			{
				if ((a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||a[i][j]=='_'||(a[i][j]>='0'&&a[i][j]<='9'))
				{
					if (a[i][j+1]!='\0')
						continue;
					else
						cout<<"yes"<<endl;
				}
				else
				{
					cout<<"no"<<endl;
					break;
				}
			}
		}
	}
	return 0;
}