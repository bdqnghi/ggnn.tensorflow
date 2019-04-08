int main()
{
	char a[101]={0}, b[101]={0};
	int lef[101], r[101], i=0, j=0;
	do{
		cin.get(a,101);
		cin.get();
		if(a[0]=='\0')
			break;
		int len=strlen(a);
		for(i=0; i<len; i++)
		{
			if(a[i]=='(')
				b[i]='$';
			else if(a[i]==')')
				b[i]='?';
			else 
				b[i]=' ';
		}
		for(i=0; i<len; i++)
			if(b[i]=='?')
				for(j=i; j>=0; j--)
					if(b[j]=='$')
					{
						b[j]=' ';
						b[i]=' ';
						break;
					}
		for(i=0; i<len; i++)
			cout<<a[i];
		cout<<endl;
		for(i=0; i<len; i++)
			cout<<b[i];
		cout<<endl;
	}while(1);
	return 0;
}


