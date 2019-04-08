void main()
{
	char *s,*p;
	s=(int*)malloc(100*sizeof(int));
	gets(s);
	for(p=s;*(p+1)!='\0';p++)
	   printf("%c",*p+*(p+1));
    printf("%c\n",*p+*s);
}