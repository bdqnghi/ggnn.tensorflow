
int main()
{
	int n, x, y, j, flag;
	int beknown[10000];
	while(cin>>n)
	{
		memset(beknown, 0, sizeof(beknown));
		while(1)
		{
			cin>>x>>y;
			if(x==0 && y==0)
				break;
			beknown[x] = -1;                         //?????????
			if(beknown[y]!=-1)
				beknown[y]++;                        
		}
		flag = false;
		for(j=0; j<n; j++)
			if(beknown[j]==n-1)                       //????????????
			{
				flag = true;
				cout<<j<<endl;
			}
		if(!flag)
			cout<<"NOT FOUND"<<endl;
	}
	return 0;
}
