int main(){
	int i,a=0,b=0,p=0;
	char sz[10000];
	char s[10000];
	double n,c;
	scanf("%lf%s%s",&n,&sz,&s);
	for(i=0;sz[i];i++){
		if(sz[i]==s[i]){
	a++;}
	b++;
	if((sz[i]!='A'&&sz[i]!='T'&&sz[i]!='C'&&sz[i]!='G')||(s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G'))
	{p++;}
}
c=1.0*a/b;
if(p!=0){
	printf("error");
}

 if(p==0&&c>n){
	printf("yes");
}
 if(p==0&&c<=n){
	printf("no");
}
	
	

return 0;
}