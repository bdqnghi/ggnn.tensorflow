void f(int n,char s[],int len);

int main()
{
	char s[520];
	cin.getline(s,518);
	int i,len;
	len=strlen(s);
	for (i=2;i<=len;i++)
	{
		f(i,s,len);
	}
	return 0;
}

void f(int n,char s[],int len)
{
	int j,p,k;
	for (j=0;j<=len-n;j++)
	{
	 for (p=j;p<=j+n-1;p++)
	 {
		 if (s[p]!=s[2*j+n-1-p])
			 break;
	 }
	 if (p==j+n)
	 {
		 for (k=j;k<=j+n-1;k++)
		 {
			 cout<<s[k];
		 }
		 cout<<endl;
	 }
	}
}