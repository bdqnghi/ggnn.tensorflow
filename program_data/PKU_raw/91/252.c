
int main (){
	char s[101],s1[101];
	char *p=s,*p1=s1;
	cin.getline(s,101);
	for(;*(p+1)!=0;p++,p1++)
		*p1=*p+*(p+1);
	*p1++=*p+*s;
	*p1=0;
	cout<<s1;
}