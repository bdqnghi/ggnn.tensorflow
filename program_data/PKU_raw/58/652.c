int main()                                  //?????
{                                           //?????
	int n;                                  //????
	int i,j;                                //????
	char a[100][100]={0};                   //????a
	cin>>n;                                 //??
	cin.get();
	for(i=0;i<n;i++)                        //a?????
	{
		cin.getline(a[i],100);
	}
	for(i=0;i<n;i++)                        //????
	{
		if(a[i][0]=='_'||(a[i][0]>='a'&&a[i][0]<='z')||(a[i][0]>='A'&&a[i][0]<='Z'))
			for(j=0;j<100;j++)
			{
				if(a[i][j]=='_'||(a[i][j]>='a'&&a[i][j]<='z')||(a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='0'&&a[i][j]<='9'))continue;
				else if(a[i][j]=='\0')
				{
					cout<<"1"<<endl;       //??
					break;
				}
				else
				{
					cout<<"0"<<endl;       //??
			        break;
				}
			}
		else 
		{
			cout<<"0"<<endl;              //??
			continue;
		}
	}
	return 0;                             //?????
}

