main()
{
	int i,a[300],j=0,t,l,k;
	char str[1500];
	gets(str);
    l=strlen(str);
	for(i=0;i<=l-1;i++)
	{	a[j]=0;
		for(;i<=l-1;i++)
	{   if(str[i]==',')
	          break;
		else 
		{
			a[j]=str[i]-48+a[j]*10;
		}}j++;	
	}

    if(l==1)
		printf("No");
    else
	{
		for(i=0;i<=j-2;i++)
	{
		if(a[i]!=a[i+1])
			break;}
    if(i==j-1)
		printf("No");
   else
   {
	   for(i=0;i<=j-2;i++)
         for(k=0;k<=j-2-i;k++)
	   if(a[k]<=a[k+1])
	   { t=a[k];
	       a[k]=a[k+1];
		   a[k+1]=t;}
    for(i=0;i<=j-2;i++)
	{
		if(a[i]!=a[i+1])
		{printf("%d",a[i+1]);
		break;}
	}}
}

}