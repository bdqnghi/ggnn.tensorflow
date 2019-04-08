int main()
{
	char x[101],*p;
	int i;
	gets( x );
	p=x;
	for ( i=0 ; *(p+i+1)!='\0' ; i++ )
		cout<<(char)(*(p+i)+*(p+i+1));
	cout<<(char)(*(p+i)+*p)<<endl;
    return 0;
}
