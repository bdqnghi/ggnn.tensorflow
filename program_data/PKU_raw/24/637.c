void main(){
	int i=0,j=0,m=0,n=30,m1,n1;
	char s[1000],w[50][20];
	char *a;
	gets(s);
	for(a=s;*a!='\0';a++){
		if(*a!=' '){
			w[j][i]=*a;
			i++;
		}
		if(*a==' '){
			w[j][i]='\0';
			if(i>m){
				m1=j;
				m=i;
			}
			if(i<n){
				n=i;
				n1=j;
			}
			j++;
			i=0;
		}
	}
	w[j][i]='\0';
    if(i>m){
		m1=j;
		m=i;
	}
	if(i<n){
		n=i;
		n1=j;
	}
	printf("%s\n%s",w[m1],w[n1]);
}
	

