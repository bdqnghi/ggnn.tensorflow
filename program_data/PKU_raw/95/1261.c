
int main()
{
	char a[100],b[100];
	int i=0;
	cin.getline(a,100);
	cin.getline(b,100);
	for( i=0 ; i<100 ; i++ )
	{
		if( a[i]>=65 && a[i]<=90 )
		{
			a[i]+=32;
		}
		if( b[i]>=65 && b[i]<=90 )
		{
			b[i]+=32;
		}
	}
	if( strcmp(a,b)>0 )
	{
		cout<<">"<<endl;
	}
	else if( strcmp(a,b)==0 )
	{
		cout<<"="<<endl;
	}
	else if( strcmp(a,b)<0 )
	{
		cout<<"<"<<endl;
	}
	

}
