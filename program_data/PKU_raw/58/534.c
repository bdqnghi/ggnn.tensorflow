int main()
{
 
	char a[100][100];
	int n,i,j,l[100],check=1;//???????
	cin>>n;
	cin.get();           //????
	for(i=0;i<n;i++)
		gets(a[i]);//??
		for(i=0;i<n;i++)
		{l[i]=strlen(a[i]);}
		
	for(i=0;i<n;i++)
	{for(j=1;j<l[i];j++)
	      {if(a[i][j]!=95&&(a[i][j]<'0'||(a[i][j]>'9'&&a[i][j]<'A')||(a[i][j]>'Z'&&a[i][j]<'a')||a[i][j]>'z')) //????
	{check=0;break;}        }
	
		if((a[i][0]=='_'||(a[i][0]>='A'&&a[i][0]<='z'))&&check==1) //????
			cout<<"1"<<endl;
		else
		{cout<<"0"<<endl;check=1;}
	}
	return 0;
	
}
