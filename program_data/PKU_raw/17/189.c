int main()
{
	char a[101];
	int i,j,k,len,p;
	while(cin.getline(a,101))
	{
		cout<<a<<endl;
		len=strlen(a);
		for(i=len;i>=0;i--)
		{
			
			 if (a[i]=='(')
			 {
				for(j=i+1;a[j]!='\0';j++)
				{
					if (a[j]==')')
					{
						a[i]='1';
						a[j]='1';
						break;
					}
				}
				if(a[i]=='1') continue;
				else a[i]='$';
			 }
		
		}
		for(p=0;a[p]!='\0';p++)
		{
			if(a[p]==')')
			{
				for(j=p-1;j>=0;j--)
				{
					if (a[j]=='(')
					{
						a[p]='1';
						a[j]='1';
						break;
					}
				}
				if(a[p]=='1') continue;
				else a[p]='?';
			}
		}
		for(k=0;a[k]!='\0';k++)
		{
			if (( a[k]!='$')&&( a[k]!='?'))
				a[k]=' ';
		}
		cout<<a<<endl;
		
	}
	return 0;
}

			

		
