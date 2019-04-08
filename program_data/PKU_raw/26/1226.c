
int main(){
    char a[101],b[101];
    int i,n,k,j;
    gets(a);
    n=strlen(a);
    for(i=0,k=0;i<=n;i++){
        if(a[i]==' '&&a[i+1]==' '){
            continue;
    	}
        b[k]=a[i];
	    k=k+1;
    }
	puts(b);
    return 0;
}