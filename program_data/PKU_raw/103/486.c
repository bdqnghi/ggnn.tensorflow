int main()
{
	char string[1500],string2[2];
	int i=0,j=0,m=0,n=0,length=0,flag=0;
	int a[1500];
	gets( string );
	length=strlen( string );
	for ( i=0;i<length;i++ )
	{
		a[i]=1;
	}
	
	for ( i=0;i<length;i++ )
	{
		if ( string[i]>=97 && string[i]<=122  )
			string[i]=string[i]-32;
	}
	
	for ( i=1;i<length;i++ )
	{
		if ( string[i]==string[i-1] )
		{
			a[i]=a[i-1]+1;
		}
		else if ( string[i]!=string[i-1] )
		{
			cout<<"("<<string[i-1]<<","<<a[i-1]<<")";
		}
	}
	cout<<"("<<string[length-1]<<","<<a[length-1]<<")"<<endl;
	
	return 0;
}
