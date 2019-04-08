int main(){
	char s[100]={'\0'},h[50][50]={'\0'},d[10]={'\0'},w[10];
	int i,j=0,k=0,t=0;
	gets(s);
	gets(w);
	gets(d);
	for(i=0;s[i]!='\0';i++){
		h[k][j]=s[i];j++;
		if((s[i+1]==' ')||(s[i+1]=='\0')){
			h[k][j]='\0';
			k++;j=0;i++;
		}
	}
	for(i=0;i<k;i++){
		t=0;
		for(j=0;h[i][j]!='\0';j++){
			if(strcmp(h[i],w)==0){
				if(h[i][j]==w[j]){
					t=1;
				}
			}
		}
		if(t==1){strcpy(h[i],d);}
	}
	for(i=0;i<k-1;i++){ 
		for(j=0;h[i][j]!='\0';j++){
			printf("%c",h[i][j]);
		}printf(" "); 
	}
	for(j=0;h[k-1][j]!='\0';j++){
			printf("%c",h[k-1][j]);
		}
}
