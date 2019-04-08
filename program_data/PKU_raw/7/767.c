int main()
{
	int k,l,i,j,x=0;
	char s[256],a[256],b[256],p[256];
	gets(s);
	gets(a);
	gets(b);
	k=(int)strlen(s);
	l=(int)strlen(a);
	for(i=0;i<k-l+1;i++){
		for(j=0;j<l;j++){
			p[j]=s[j+i];
		}
		p[j]='\0';
		if(strcmp(p,a)==0){
			x=i;
			break;
		}
	}
	if(x==0){
		printf("%s",s);
	}
	else{
		for(i=0;i<x;i++){
			printf("%c",s[i]);
		}
		printf("%s",b);
		for(i=x+l;i<k;i++){
			printf("%c",s[i]);
		}
	}
	return 0;
}