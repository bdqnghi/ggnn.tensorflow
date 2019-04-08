int main()
{
	char a[255],b[255],*p;
	int i,m,c[255],*q=c;
	cin.getline(a,252);
	cin.getline(b,252);
	memset(c,0,sizeof(c));
	for(p=a;*p!='\0';)
		p++;
	m=a+252-p;
	for(;p>=a;p--)
		*(p+m)=*p;
	p+=m;
	for(;p>=a;p--)
		*p='0';
	for(p=b;*p!='\0';)
		p++;
	m=b+252-p;
	for(;p>=b;p--)
		*(p+m)=*p;
	p+=m;
	for(;p>=b;p--)
		*p='0';
	for(i=0;i<253;i++)
		c[i]=a[i]+b[i]-96;
	for(i=252;i>0;i--)
		if(c[i]>9)
		{
			c[i]-=10;
			c[i-1]++;
		}
	while(*q==0)
		q++;
	if(q>=c+252)
		cout<<"0";
	while(q<c+252)
		cout<<*q++;
	cout<<endl;
	return 0;
}