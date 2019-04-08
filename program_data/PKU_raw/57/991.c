
int main(){
	int n,len,i,k;
	char c[M];
	scanf("%d",&n);

	for(k=0;k<n+1;k++){
		gets(c);

	    len=strlen(c);
        if(c[len-2]=='e'){
			c[len-2]='\0';
			printf("%s\n",c);
		}else
        if(c[len-2]=='l'){
			c[len-2]='\0';
			printf("%s\n",c);
		}else
        if(c[len-3]=='i'){
			c[len-3]='\0';
			printf("%s\n",c);
		}
	}

	return 0;
}
