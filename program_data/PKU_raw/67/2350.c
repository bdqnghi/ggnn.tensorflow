int main()
{
	int n;//????
	cin>>n;
	float a,b,c;//?????????
	cin>>a>>b;
	c=b/a;//???????
	float d[100],e[100],f[100];//??????,??f????
	int i;//??????
	for (i=1;i<=n-1;i++)
	{
		cin>>d[i]>>e[i];
		f[i]=e[i]/d[i];
	}
	//????????
	int j;
	for (j=1;j<=n-1;j++)
	{
			if (f[j]-c>0.05)
			cout<<"better"<<endl;
		else if (f[j]-c<-0.05)
			cout<<"worse"<<endl;
		else if (f[j]-c>=-0.05&&f[j]-c<=0.05)
			cout<<"same"<<endl;
	}
	cin.get();
	return 0;
}