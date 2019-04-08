int main(){
	char s[110],s1[110];
	cin.getline(s,110);
	char *p=s,*p1=s1;
	for(p=s;*p!='\0';p++);
	int len=p-s;
	for(p1=s1,p=s;p<s+len-1;p++,p1++)
		*p1=*p+*(p+1);
	*p1=*p+*(p-len+1);
	*(p1+1)='\0';
	p1=s1;
	cout<<p1;
	return 0;
}