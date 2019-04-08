
int main() {
	unsigned int i;
	char s[102],k;
	cin.getline(s,102);
	char *p=s;
	k=*p;			//????
	for(i=0;i<strlen(s)-1;i++)
	{
		*p+=*(p+1);
		p++;
	}				//???????
	*p=*p+k;			//??????
	cout<<s;
	return 0;
}
