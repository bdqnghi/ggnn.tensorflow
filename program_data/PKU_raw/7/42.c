
int main(){
	char s[100]={'\0'},w[50]={'\0'},d[50]={'\0'},h[100]={'\0'};
	int i,j,k=0,t=0,m,n=0;
	gets(s);
	gets(w);
	gets(d);
	for(i=0;s[i]!='\0';i++){
		if((s[i]==w[0])&&(n==0)){
			k=0;
			for(j=0;w[j]!='\0';j++){
				t=0;
				if(w[j]==s[i+j]){
					k++;
					t=1;
				}
			}
			if(t==1){
				for(m=0;d[m]!='\0';m++){
					printf("%c",d[m]);}i=i+k;n=1;
			}
		}
		if(s[i]!='\0'){printf("%c",s[i]);}
	}
}
