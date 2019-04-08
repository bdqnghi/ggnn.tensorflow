int main()
{
	int i;
	char a[81]={0};
	char b[81]={0};
	gets(a);
	gets(b);	
	for (i=0;i<=79;i++)
		{
			if (a[i]<91)
			{
				a[i]+=32;
			}
		}
	for (i=0;i<=79;i++)
		{
			if (b[i]<91)
			{
				b[i]+=32;
			}
		}
	if (strcmp(a,b)==0) printf("=");
	else if (strcmp(a,b)>0) printf(">");
	else if (strcmp(a,b)<0) printf("<");
	return 0;
}
		
