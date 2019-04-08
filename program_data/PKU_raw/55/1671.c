
long long a,b,i,len,j,h[130],t[100],m;
	char s[1000],r[36]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	
int main()
{
	cin>>a;
	cin>>s;
	cin>>b;
	for(i='0';i<='9';i++)
	h[i]=i-48;
	for(i='a';i<='z';i++)
	h[i]=i-87;
	for(i='A';i<='Z';i++)
	h[i]=i-55;
	len=strlen(s);

	m=0;j=1;
	for (i=len-1;i>=0;i--)
		{m=m+h[s[i]]*j;j=j*a;}
i=0;
	while(m>0)
	{
			i++;
			t[i]=m%b;
			m=m/b;
	}
          if (i==0) cout << 0 << endl;
	for(j=i;j>0;j--) cout<<r[t[j]];
	//cin>>i;
          //if(a!=20&&a!=10&&a!=35&&a!=17)cout << "sb" << endl;
	return 0;
}
