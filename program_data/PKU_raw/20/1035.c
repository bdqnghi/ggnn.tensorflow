int main()
{
	char str[11],substr[4];
	int i,num=0,j,h;
	while(scanf("%s%s",str,substr)!=EOF){
		int max=(int)str[0],len=strlen(str);
		for(i=1;i<len;i++){
			if(max<str[i]){
				max=(int)str[i];
				num=i;
			}
		}
		for(j=0;j<=num;j++){
			printf("%c",str[j]);
		}
		printf("%s",substr);
		for(h=num+1;h<len;h++){
			printf("%c",str[h]);
		}
		printf("\n");
	}
	return 0;
}