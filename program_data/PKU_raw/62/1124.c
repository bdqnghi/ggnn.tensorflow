int main (){
	char a[300],b[300]={'0'};
	int i,j,n;
	gets(a);
	n=strlen(a);
	j=1;
	b[0]=a[0];
	for(i=1;i<n;i++){
		if(a[i]!=' '){
			b[j]=a[i];
			j++;
		}
		else if(a[i]==' '&&a[i+1]!=' '){
			b[j]=a[i];
			j++;
		}
		
	}
	printf("%s",b);

	return 0;
}
