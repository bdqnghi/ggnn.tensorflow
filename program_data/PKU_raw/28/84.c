void main()
{

	char a[300][50];
	int b[300];
	int i=1,n,m;

	scanf("%s",a[0]);printf("%d",strlen(a[0]));

	while(scanf("%s",a[i])!=EOF){
		b[i]=strlen(a[i]);
		printf(",%d",b[i]);
		i++;}

}