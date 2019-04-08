int main()
{
	char s[110],s1[110],*p=s,*p1=s1;
	int i,n;
	cin.getline(s,110);
	n=strlen(s);
	for(i=0;i<n-1;i++)
		*(p1+i)=*(p+i)+*(p+i+1);
	*(p1+n-1)=*(p+n-1)+*p;
	for(i=0;i<n;i++)
		cout<<*(p1+i);
}
