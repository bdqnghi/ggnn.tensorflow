int main()
{
	int t;
	char a[120000];
	int i,j,k;
	int c;
	cin>>t;
	cin.getline(a,110000);
	memset(a,0,sizeof(a));
	for(i=1;i<=t;i++)
	{
	   cin.getline(a,110000);
	   c=strlen(a);
	   for(j=0;j<c;j++)
	   {
		   if(a[j]=='1')  continue;
		   int x=0;
		   for(k=j+1;k<c;k++)
		   {
			   if(a[k]==a[j])
			   {
				   a[k]='1';
				   x++;
			   }
		   }
		   if(x==0)
		   {
			   cout<<a[j]<<endl;
			   break;
		   }


	   }
	   if(j==c)
		   cout<<"no"<<endl;

	}
	return 0;
}