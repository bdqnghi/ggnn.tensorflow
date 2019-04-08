void main()
{
	char s[200],w[100];
	
	int i;
	scanf("%s %s",s,w);
	
	
	for (i=0;i<100;i++)
		if (w+i==strstr(w,s))
		{
			printf("%d",i);
			break;
		}
}
