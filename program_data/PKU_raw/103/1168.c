main()
{
	char a[10001];
	scanf("%s",a);
	int i=0,j=0,k,count=1;
	while(a[i]!='\0')
	{
	 if(a[i]>='A'&&a[i]<='Z')
	 {a[i]=a[i]+32; j++;}
	 else j++;
	 i++;
	}
   for(k=0;k<i;k++)
   {
   	if (a[k]==a[k+1])
   	{count++;}
   	else
   	{
   	 printf("(%c,%d)",a[k]-32,count);count=1;
   	}
   }
}