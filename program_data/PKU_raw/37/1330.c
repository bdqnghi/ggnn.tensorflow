int main(){
char s[80];
gets(s);
char z[100000];
int n=atoi(s),i,j,a,k,m,b;
for(i=0;i<n;i++){
	gets(z);
    a=strlen(z);
	m=0;
	b=0;
	for(j=0;j<a;j++){
		m=0;
		for(k=0;k<a;k++){
			if((z[j]==z[k])&&(j!=k)){
				m=1;
				break;
			}
		}
		if(m==0){
			printf("%c\n",z[j]);
			b=1;
			break;
		}
	}
	   if(b==0){
	    	printf("no\n");
	   }

}
	
return 0;
}