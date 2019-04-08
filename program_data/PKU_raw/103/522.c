
int main()
{   
	char a[1001],c;
	int sum=1,i;
    
   while(cin >> a)
   {
    if(strlen(a)==1)
	{   
		c=a[0];
		if( (c>='a')&&(c<='z') )
					c=c-'a'+'A';
				   cout<< '('<<c<<','<<1<<')'<< endl;
		continue;
	}
	for( i=0;i<strlen(a);i++)
	{
		
		if( i>0 )
		{
			if( (a[i-1]==a[i])||(a[i-1]==a[i]-'A'+'a')||(a[i-1]==a[i]-'a'+'A') )
			{
				sum++;
				if(i==strlen(a)-1)
				{
					c=a[i-1];
				   if( (c>='a')&&(c<='z') )
					c=c-'a'+'A';
				   cout<< '('<<c<<','<<sum<<')';
				}
			}
			else
			{
				c=a[i-1];
				if( (c>='a')&&(c<='z') )
					c=c-'a'+'A';
				cout<< '('<<c<<','<<sum<<')';
				sum=1;
				if(i==strlen(a)-1)
				{
					c=a[i];
					if( (c>='a')&&(c<='z') )
					c=c-'a'+'A';
				cout<< '('<<c<<','<<sum<<')';
				}

			}
		}
	}
    cout << endl;
   }
	return 0;
}