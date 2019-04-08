int main()
{
	char a[20][50],c;
	int i=0;
	do{scanf("%s",a[i]);scanf("%c",&c);i++;}while(c!='\n');
	printf("%s",a[i-1]);
	i=i-2;
	for(;i>=0;i--)printf(" %s",a[i]);
	printf("\n");
}