//????


int main()
{
	char a[80],b[80];
	gets(a);		//?????
	gets(b);
	for(int i=0;a[i]!='\0';i++)		//????????
		if(a[i]>=65&&a[i]<=90)
			a[i]+=32;
	for(int i=0;b[i]!='\0';i++)
		if(b[i]>=65&&b[i]<=90)
			b[i]+=32;
	int c=strcmp(a,b);           //??
	if(c>0)
		cout<<'>'<<endl;
	if(c==0)
		cout<<'='<<endl;
	if(c<0)
		cout<<'<'<<endl;
	return 0;
}