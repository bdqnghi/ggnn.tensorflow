int main()
{
	char str[150][300],c;
	int i,a[300],j=0;
	for(i=0;i<300;i++)
	{
		scanf("%s",str[i]);
        *(a+i)=strlen(str[i]);
        j++;
		c=getchar();
		if(c=='\n') break;	
	}
	printf("%d",*a);
	for(i=1;i<j;i++)
		printf(",%d",*(a+i));
}