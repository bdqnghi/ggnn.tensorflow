int main()
{
	char a[100];
	char b[100];
	char c[100];
	int i,j,m,k;
    int n=0;
	scanf("%s",a);
	scanf("%s",b);
	scanf("%s",c);
    m=strlen(b);
	for(i=0;a[i]!='\0';i++){
		if(a[i]==b[0]){
			n=0;
			for(j=0;b[j]!='\0';j++){
				if(a[i+j]==b[j])n++;
			}
			if(m==n)break;
		}
	}
if(m==n){
	for(k=0;k<i;k++){
		printf("%c",a[k]);
	}
    printf("%s",c);
	for(k=i+m;a[k]!='\0';k++){
		printf("%c",a[k]);
	}
}
	
	
	if(n!=m)
		printf("%s",a);
	return 0;
}
	


