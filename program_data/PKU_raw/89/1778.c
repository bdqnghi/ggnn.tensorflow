
int main()
{
	int n, x, y, j, flag;
	int know[10000], beknown[10000];
	while(cin>>n)
	{
		memset(know, 0, sizeof(know));
		memset(beknown, 0, sizeof(beknown));
		while(1)
		{
			cin>>x>>y;
			if(x==0 && y==0)
				break;
			know[x]++;
			beknown[y]++;
		}
		flag = false;
		for(j=0; j<n; j++)
			if(know[j]==0 && beknown[j]==n-1)                       //????????????
			{
				flag = true;
				cout<<j<<endl;
			}
		if(!flag)
			cout<<"NOT FOUND"<<endl;
	}
	return 0;
}

