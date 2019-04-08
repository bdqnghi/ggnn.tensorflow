int main()
{
char s[1000];
int i,l,k,m;
gets(s);
l=strlen(s);
m=l;
for(i=0;i<l-1;i++){
	if(s[i]==' '&&s[i+1]==' '){
		for(k=i;k<m-1;k++){s[k]=s[k+1];}
		i--;
	    m--;
	}
}
for(i=0;i<m;i++){printf("%c",s[i]);}
return 0;
}
