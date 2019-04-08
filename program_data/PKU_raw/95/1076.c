int main(){
	char a[100];
	char b[100];
	int c,d,e,i;
	gets(a);
	gets(b);
	c=strlen(a);
	d=strlen(b);
	if(c>=d)
		e=c;
	else
		e=d;
	for(i=0;i<e;i++)
	{if(a[i]<91)
	a[i]=a[i]+32;}
	for(i=0;i<e;i++)
	{if(b[i]<91)
	b[i]=b[i]+32;}
	

	for(i=0;i<e;i++)
	{if(a[i]>b[i]&&a[i]-b[i]!=32)
	{cout<<">"<<endl;
	return 0;}
		else if(a[i]<b[i]&&b[i]-a[i]!=32)
		{cout<<"<"<<endl;
		return 0;}}
		cout<<"="<<endl;
		return 0;
}

	
