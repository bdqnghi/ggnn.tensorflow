int main()
{
	char a[81],b[81];
	int i;
	gets(a);
	gets(b);
	for(i=0;;i++)
	{
		if (a[i]=='\0')
			break;
		if (a[i]>96)
		{
			a[i]=a[i]-32;
		}
		if (b[i]>96)
		{
			b[i]=b[i]-32;
		}
	}
	if (strcmp(a,b)>0)
		{printf(">\n");}
	else if (strcmp(a,b)<0)
		{printf("<\n");}
	else if (strcmp(a,b)==0)
		{printf("=\n");}
		
	return 0;
}

