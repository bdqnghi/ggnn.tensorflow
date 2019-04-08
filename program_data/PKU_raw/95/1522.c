int main()
 {  int i=1,c=0;
	char a[82],b[82];
    gets(a);
	gets(b);
	for(i=0;i<=81;i++)
	{
		if(b[i]=='\0')
			break;
		else
		{	if(b[i]>='a'&&b[i]<='z')
				b[i]=b[i]-32;
           
		}
	}
	 for(i=0;i<=81;i++)
	{
		if(a[i]=='\0')
			break;
		else
		{	if(a[i]>='a'&&a[i]<='z')
				a[i]=a[i]-32;
           
		}
	}
	for(i=0;i<=81;i++)
	{
	if(a[i]=='\0')
			break;
	else	c+=a[i]-b[i];
	}
	if(c==0)
	printf("=");
   if(c>=1)
      	printf(">");
   if(c<=-1)
printf("<");
	 return 0; 
	
}
