void main()
{
   char s[102],a[50],b[50];
   int i=0;
   gets(s);
   while(s[i]!=' ')
   {
	   a[i]=s[i];
	   i++;
   }
   a[i]='\0';
	i++;
	int j=i;
	while(s[i]!='\0')
	{
		b[i-j]=s[i];
		i++;
	}
	b[i-j]='\0';

	i=0;
	j=0;
	int ip,jp;

	while(b[j]!='\0')
	{
		ip=i;
		jp=j;
		do
		{
			if(a[ip]=='\0')
			{   printf("%d",j);
	
				return;
				}
		}while(a[ip++]==b[jp++]);

		j++;
	}
    printf("%d",0);
   return;
}