int main(){
    char a[100],b[50][20];
	int n,i,j=0,k=0;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]==32&&a[i-1]!=32){
		    b[j][k]='\0';
			k=0;
			j++;
		}else if(a[i]==32&&a[i-1]==32){
			continue;
		}else{
			b[j][k]=a[i];
			k++;
		}
	}
	b[j][k]='\0';
	for(i=0;i<=j;i++){
		if(i==0){
			printf("%s",b[i]);
		}else{
			printf(" %s",b[i]);
		}
	}
	return 0;
}
