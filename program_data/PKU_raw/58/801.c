int judge(char a)
{
	int flag=0;
	if(a==95||(a>64&&a<91)||(a>96&&a<123))
		flag=1;
	return flag;
}

int main()
{
	char words[100][100]={{0}};
	int n=0;int i=0,j=0,space=0;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		cin.getline(words[i],100,'\n');
		for(j=0;j<100;j++)
		{
			if((words[i][j]>64&&words[i][j]<91)||(words[i][j]>96&&words[i][j]<123)||(words[i][j]>47&&words[i][j]<58)||words[i][j]==95) continue;
			else 
			{
				if(words[i][j]!=0)
				{
				space=1;
				cout<<"0"<<endl;
				break;
				}
			}
		}
		if(space==0)
		    cout<<judge(words[i][0])<<endl;
		space=0;
	}
	return 0;
}