

int main()
{
	
	int n;
	cin>>n;
	cin.get();//??n??????????
	char a[100];
	for(int i=0;i<n;i++)
	{
		cin.getline(a,90);//????????
		int x=strlen(a);
		int counter=0;
		for(int j=0;j<x;j++)
		{
			if(j==0&&((a[j]>='A'&&a[j]<='Z') || ( a[j]>='a'&&a[j]<='z') || a[j]=='_'))counter=0;//??????????
			else if( j!=0&&( (a[j]>='0'&&a[j]<='9') || (a[j]>='A'&&a[j]<='Z') || ( a[j]>='a'&&a[j]<='z') || a[j]=='_'))counter=0;
			else {counter=1;break;}
		}
		if(counter==0)cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}