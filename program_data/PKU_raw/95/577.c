int main()
{
	int la,lb,i;

    char s[80];
	char a[80];
    gets(s);
	gets(a);
    la=strlen(s);
	lb=strlen(a);
	for(i=0;i<la;i++)
     {
	 if(s[i]<='z' && s[i]>='a') 
        s[i]-=32; 
    } 
    for(i=0;i<lb;i++)
     {
	 if(a[i]<='z' && a[i]>='a') 
        a[i]-=32; 
    } 
    for(i=0;i<=80;i++)
	{
		if(s[i]>a[i])
		{
	       printf(">"); break;
		}
	         if(s[i]<a[i])
			 {
	           printf("<");break;
			 }
	          if(s[i]==a[i]&&la==lb&&i==la)
	           
				  printf("=\n");
			  if(i==la)break;
	}
	
}

