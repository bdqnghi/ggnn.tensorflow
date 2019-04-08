int main()
{
	char a[100],b[100],s[100],ss[100][100]={'\0'},d[100]={'\0'};
	int i,j,m,n,t,k,l,p;
	gets(s);
	gets(a);
	gets(b);
	t=strlen(s);
	n=0;
	m=0;
	for(i=0;i<t;i++){
		if(s[i]!=' '&&s[i]!='\0'){
			ss[m][n]=s[i];
			n++;
		}
		else{
			m++;
			n=0;
		}
	}
	for(j=0;j<=m;j++){
		if(strcmp(ss[j],a)==0){
			strcpy(ss[j],b);
		}
	}
	k=0;
	l=0;
	for(p=0;;p++){
		if(ss[k][l]=='\0'&&k!=m){
			
			    d[p]=' ';
                k++;
			    l=0;
			
		}
		else if(ss[k][l]!='\0'){
			d[p]=ss[k][l];
			l++;
		}
		else{
			break;
		}
	}
	puts(d);
	return 0;
}



