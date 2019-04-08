int main()
{
	char num[5];
	int i,len;
	scanf("%s",num);

	len=strlen(num);
	for(i=len-1;i>=0;i--){
		printf("%c",num[i]);
	}
	printf("\n");
	return 0;
}
