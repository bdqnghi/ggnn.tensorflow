int main()
{
	char a[200],*p=NULL,b;
	cin.getline(a,199);
	p=a;
	do{
		b=*p;
		p++;
		b=b+*p;
		cout <<b;
	}while(*(p+1)!='\0');
	b=*p;
	p=a;
	b=b+*p;
	cout <<b <<endl;
	return 0;
}
