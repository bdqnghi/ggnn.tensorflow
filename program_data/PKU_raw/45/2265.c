int main(){
	char a[50],b[50],c[50];
	int n,m,i,j,k=0;
          scanf("%s%s",a,b);
	n=strlen(a);
	m=strlen(b);
	for(i=0;i<m;i++){
		if(b[i]==a[0]){
			for(j=i;j<i+n;j++){
				c[k]=b[j];
				k++;
			}
			c[k]='\0';
			if(strcmp(c,a)==0){
				printf("%d",i);
			}
		}
	}
	return 0;
}