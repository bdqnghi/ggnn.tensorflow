int main(){
	char a[300],b[300];
	gets(a);
	char *p,*q;
	for(p=a,q=b;*(p+1)!='\0';p++,q++){
		*q=*p+*(p+1);
	}
	*q=*p+a[0];
	*(++q)='\0';
	cout<<b;
}