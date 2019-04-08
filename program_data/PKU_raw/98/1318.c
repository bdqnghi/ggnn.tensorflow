int main()
{
	int a[81]={0},n=0,i=0;
	char s[45];
	int *p=&a[0],*q=&a[0];
	cin>>n;
	cin>>s;
	cout<<s;
	p=p+strlen(s);
	for(i=1;i<n;i++)
	{
	   cin>>s;
	   if(p+1+strlen(s)<=&a[80])
	   {
	   cout<<' '<<s;
	   p=p+1+strlen(s);
	   }
	   else
	   {
	   cout<<endl;
	   cout<<s;
	   p=q+strlen(s);
	   }
	}
	return 0;
}