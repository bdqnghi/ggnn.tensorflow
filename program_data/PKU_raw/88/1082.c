int main()
{
	int i,j,a=0;
	char c[50]={'\0'};
	gets(c);
	for(i=0;i<strlen(c);i++){
		if(c[i]!='\0'){
			if(c[i]>47&&c[i]<58){
				for(j=i;j<=strlen(c);j++){
					if(c[j]<48||c[j]>57){
						printf("\n");
						i=j;
						break;
					}
					printf("%c",c[j]);
				}
			}
		}
	}
	return 0;
}