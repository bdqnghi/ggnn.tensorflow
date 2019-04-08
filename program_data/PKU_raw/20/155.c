int main()
{   int n,i,j;
    char str[10]={0},substr[3]={0},m=0;

	while(scanf("%s %s",str,substr)==2){m=0;n=0;
		
	for(i=0;i<10;i++){if(str[i]>m){m=str[i];n=i;}}

	
	for(i=0;i<=n;i++)printf("%c",str[i]);
	printf("%s",substr);
    for(i=n+1;i<strlen(str);i++)printf("%c",str[i]);printf("\n");
				

	
	
	}return 0;}
