int main()
{
	char c;
	int get[101]={0},i,n=1;
	int shang[100]={0},yu[100]={0};
	while((c=cin.get())!='\n')
	{
	 get[n]=c-'0';n++;
	}
	n--;
  	for(i=1;i<=n;i++)
	{
	 shang[i]=(yu[i-1]*10+get[i])/13;
	 yu[i]=(yu[i-1]*10+get[i])%13;
	}
	if(n==1) cout<<"0";
	for(i=2;i<=n;i++)
	{
	  if(i==2&&shang[i]==0)
	  {
		  if(n==2)
		  {cout<<"0";break;}
		  else continue;
	  }
	cout<<shang[i];
	}
	cout<<"\n"<<yu[n]<<endl;
	return 0;
}

