int main()
{
	char a[50];
	int n,b[1000];
	cin>>n;
	int i,j,k,m,q=0,s=0,para=0,word=0;
	char *p=a;
	cin>>a;cout<<a;//?????
	para=para+strlen(a);
	for(i=1;i<n;i++)
	{
		cin>>a;
		word=strlen(a);
		para=para+strlen(a)+1;
		if(para==strlen(a)+1)
		{
			cout<<a;
			para=para-1;//???????
		}
		else
		{
		if(para<80&&para!=strlen(a)+1)
		{
			cout<<" ";
			for(p=a;p<a+strlen(a);p++)
				cout<<*p;//??????
		}
		if(para==80)
		{
			cout<<" ";
			for(p=a;p<a+strlen(a);p++)
				cout<<*p;
			cout<<endl;//??80???
			para=0;
		}
		if(para>80)
		{
			para=strlen(a);
			cout<<endl;
			for(p=a;p<a+strlen(a);p++)
			cout<<*p;//??????
		}
		}

	}
	return 0;
}
