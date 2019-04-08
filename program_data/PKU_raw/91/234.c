int main()
{
	char a[110],b[110];
	char *p=a,*q=b;
	cin.getline(a,110);
	memset(b,'\0',sizeof(b));
	p=a;
	p++;
	while(*p!='\0'){
		*q=*p+*(p-1);
		p++;
		q++;
	}
	*q=*a+*(p-1);
	q=b;
	while(*q!='\0'){
		cout<<*q;
		q++;
	}
	return 0;
}
