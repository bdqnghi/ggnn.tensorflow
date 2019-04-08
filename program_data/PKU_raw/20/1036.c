int main()
{
	int i,j,t;
	char str[11],substr[4];
	while(scanf("%s%s",str,substr)!=EOF){
		t=0;
		for(i=0;str[i];i++)if(str[i]>t)t=str[i];
	for(i=0;str[i];i++){
		if(str[i]<t)printf("%c",str[i]);
		else{
			printf("%c",str[i]);
			printf("%s",substr);
			break;
		}
	}
	for(j=i+1;str[j];j++)printf("%c",str[j]);
	printf("\n");
        }
	return 0;
}