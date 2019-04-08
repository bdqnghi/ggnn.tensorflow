
int main()
{
	int i,n,j,k;
	char str[100];
	
	gets(str);

	n=strlen(str);

	for(i=1;i<=n;i++){
		for(k=1;k<101;k++){
			if(str[i-1]==' '&&str[i]==' '){
			    for(j=i;j<n;j++){
				str[j]=str[j+1];
				}
			}
		}
	}

	printf("%s\n",str);

	return 0;
}
