
int main()
{
	int a,b,i,k=0,l;
	char n[31],s[31];
	cin>>a>>n>>b;
	l=strlen(n);
	for (i=0;i<l;i++)
	{
		if (n[i]<58) n[i]-=48;
		else if (n[i]>96) n[i]-=87;
		else n[i]-=55;
		k=k*a+n[i];
	}
	i=0;
	if (k==0) cout<<k;
	while(k)
	{
		s[i]=k%b+48;
		if (s[i]>57) s[i]+=7;
		k/=b;
		i++;
	}
	for (;i>0;i--) cout<<s[i-1];
  	return 0;
}