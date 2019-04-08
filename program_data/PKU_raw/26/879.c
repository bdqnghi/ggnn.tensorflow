int main()
{    
	int i,n,j=0,k;
	char s[101];
	char a[101];
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++){
		if(s[i]!=' '){
			if(a[j]==' '){
				j++;
             a[j]=s[i];
			   j++;

			}else{
             a[j]=s[i];
			   j++;
			}
			
		}else{
			a[j]=' ';
			
		}
	}
	for(i=0;i<j;i++){

		printf("%c",a[i]);
	}
		return 0;
}		

