int main()
{
	char ch[1001];
	char s;
	int i,ln,m,j;
	cin>>ch;
	ln=strlen(ch);
	for(i=0;i<ln;i++)
	{
		if(ch[i]>=96)
		{
			ch[i]=ch[i]-32;
		}
	}
	m=0;
	j=1;
	for(i=0;i<ln;i++)
	{
		s=ch[i];
		
		if(ch[i+1]==s)
			j++;
		else
		{cout<<"("<<s<<","<<j<<")";
		   m=i;
		   j=1;
		  }
	}
	return 0;
}


