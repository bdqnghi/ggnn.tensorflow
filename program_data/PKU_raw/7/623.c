int main()
{
	char str[300],s[100],r[100];
	int i,j,k,m;
	scanf("%s%s%s",str,s,r);
	m=strlen(s);
	for(i=0;str[i]!='\0';i++){
		k=0;
		for(j=0;j<m;j++){
			if(str[i+j]==s[j])
				k++;
		}
		if(k==m){
			for(j=0;j<m;j++){
				str[i+j]=r[j];
			}
			break;
		}
	}
	printf("%s",str);
	return 0;
}