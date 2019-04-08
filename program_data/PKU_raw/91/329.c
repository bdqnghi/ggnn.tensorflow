
int main() {
	char s[102],s1[102];
	cin.getline(s,102);
	int i=0;
	char *p=s,*q=s1;
	for(i=0;i<strlen(s)-1;i++)
	{
		*(q+i)=*(p+i)+*(p+i+1);
		cout<<*(q+i);
	}
		*(q+i)=*(p+i)+*(p);
	    cout<<*(q+i);
	return 0;
}