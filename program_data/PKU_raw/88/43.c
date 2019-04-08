int main()
{
	char a[31];
	int i,len,p=1;
	gets(a);
	len=strlen(a);
	if(a[0]>='0'&&a[0]<='9')
		cout<<a[0];
	for(i=1;i<len;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			  if(p==0)
				  cout<<endl;
				cout<<a[i];
				p=1;
		}
	    else
        {
			p=0;
		}
	}
	return 0;
}



