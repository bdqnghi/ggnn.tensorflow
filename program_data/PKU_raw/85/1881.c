int main()
{
	char a[100][21];
	int n,i,j;
	cin>>n;
	cin.ignore();
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(!((a[i][0] >= 'a' && a[i][0] <= 'z') || 
			(a[i][0] >= 'A' && a[i][0] <= 'Z') ||
			(a[i][0] == '_')))
		{
			cout<<"no"<<endl;
			continue;
		}
		else
		{
			for(j = 1; a[i][j]!='\0'; j++)
			{
				if(!((a[i][j] >= 'a' && a[i][j] <= 'z') ||
					(a[i][j] >= 'A' && a[i][j] <= 'Z') ||
					(a[i][j] >= '0' && a[i][j] <= '9') ||
					(a[i][j] =='_')))
				{
					cout << "no" <<endl;
					break;
				}
				if(a[i][j+1]=='\0')
					cout<<"yes"<<endl;
			}
			
		}
	}
	return 0;
}