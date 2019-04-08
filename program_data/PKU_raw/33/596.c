int main() {
	int n,i;
	char a[9999][256],*p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);

	}
         	for(i=0;i<n;i++){
		for(p=a[i];*p!='\0';p++){
			if(*p=='A'){*p='T';}
				else if(*p=='C'){*p='G';}
					else if(*p=='G'){*p='C';}
			else if(*p=='T'){*p='A';}
		}
		}
	for(i=0;i<n;i++){
    puts(a[i]);}


	return 0;
}
