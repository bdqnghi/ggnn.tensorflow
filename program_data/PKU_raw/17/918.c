void pipei(char str[])
{
	int i,la,stack[100],k=0;
	char res[101];
	la=strlen(str);
	for(i=0;i<la;i++) res[i]=' ';
	res[la]='\0';
	for(i=0;i<la;i++)
	{
		if(str[i]==')')
		{
			if(k==0||stack[k-1]>0)
				stack[k++]=i+1;
			else k--;
		}
		else if(str[i]=='(')
			stack[k++]=-(i+1);
	}
	for(i=0;i<k;i++)
	{
		int a=stack[i];
		if(a<0) res[-a-1]='$';
		else res[a-1]='?';
	}
	cout<<str<<endl;
	cout<<res<<endl;
}
int main()
{
	int n,i;
	cin>>n;
	cin.get();
	char str[101];
	for(i=0;i<n;i++)
	{
		
        cin.getline(str,101);
		pipei(str);
		
	}
	return 0;
}

	

