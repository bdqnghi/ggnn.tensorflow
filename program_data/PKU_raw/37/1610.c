int main()
{
	int N=0,i=0,j=0,k=0,sum=0,mark=0;
	int flag[100000]={0};
	char ch[100000];
	cin>>N;
	for(i=0;i<N;i++)
	{
		mark=0;
		memset(flag,0,sizeof(flag));
		cin>>ch;
		for(j=0;ch[j]!='\0';j++)
		{
			sum=1;
			if(flag[j]!=0) continue;
			for(k=j+1;ch[k]!='\0';k++)
			{
				if(ch[k]==ch[j])flag[k]=1,sum++;
			}
			if(sum==1) {cout<<ch[j]<<endl,mark=1;break;}
		}
		if(mark==0) cout<<"no"<<endl;
	}
	return 0;
}
