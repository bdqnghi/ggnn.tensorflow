int main()
{
	int n,i,j,a[30][2]={0},num=0,min=26;
	char c,out;
	cin>>n;
	getchar();
	for(j=0;j<n;j++)
	{  
		//c=getchar();
		num=0;
		out=1;
		while((c=getchar())!='\n')
		{
			if(a[c-'a'][0]==0)
			{a[c-'a'][1]=num;}
			a[c-'a'][0]++;num++;
		}
		min=10000;
		for(i=0;i<26;i++)
		{
			if(a[i][0]==1&&a[i][1]<min)
			{min=a[i][1];out='a'+i;}
		}
		if(out==1)
			cout<<"no"<<endl;
		else
			cout<<out<<endl;
		for(i=0;i<26;i++)
			a[i][0]=0;
		//getchar();
	}	return 0;
}