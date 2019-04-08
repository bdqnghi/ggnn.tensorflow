int main()
{
	int j=0,i,l,ls;
	char s[105],str[105],a[105],x[105],s1[105]={' ','\0'},s2[2]={' ','\0'};
	gets(s);
	gets(str);
	gets(a);
	strcat(s,s2);
	strcat(s1,s);
	strcpy(s,s1);
	l=strlen(str);
	ls=strlen(a);
	strcpy(x,s);
	for(i=0;s[i]!='\0';i++){
		if(s[i]==str[j]){
			j++;
		}else{
			j=0;
		}
		if(l==j&&s[i-j]==' '&&s[i+1]==' '){
			if(i-j!=-1){
			    x[i-j+1]='\0';
		    	strcat(x,a);
			}else{
				strcpy(x,a);
			}
			strcat(x,s+i+1);
			i=i+ls-l;
			j=0;
			strcpy(s,x);
		}
	}
	for(i=0;x[i+2]!='\0';i++){
        x[i]=x[i+1];
	}
	x[i]='\0';
	printf("%s",x);
	return 0;
}