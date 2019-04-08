int main()
{
	int a;
	char dc[50];
	scanf("%s",dc);
	a=strlen(dc);
	printf("%d",a);
	while(scanf("%s",dc)==1){
		a=strlen(dc);
		printf(",%d",a);
	}
	return 0;
}



