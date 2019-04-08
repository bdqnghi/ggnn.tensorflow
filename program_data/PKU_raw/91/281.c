
int main()
{
	char a[101],b[101];
	cin.getline(a,101);
	char *p=NULL,*q=NULL;
	for(p=a,q=b;*p!='\0';p++,q++){
		if(*(p+1)!='\0')
			*q=(char)(*p+*(p+1));
		else *q=(char)(*p+a[0]);
	}
	for(q=b,p=a;*p!='\0';p++,q++)
		cout<<*q;
	cout<<endl;
	return 0;
}
