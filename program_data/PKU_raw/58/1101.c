
int main()
{
	int n,i,l,a;
	char s[81],*p;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		a=1;
		gets(s);
		l=strlen(s);
		for(p=s;p<s+l;p++){
			if(p==s&&((*p>=65&&*p<=90)||(*p>=97&&*p<=122)||*p==95)){
			}
			else if(p!=s){
				if((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')||*p=='_'||(*p>='0'&&*p<='9')){
				}
				else{
					a=0;
					break;
				}
			}
			else{
				a=0;
				break;
			}
		}
		printf("%d\n",a);
	}
	return 0;
}