void main()
{
	char s[350];
	int a[110],i=0,num=0,same=0;
	scanf("%s",s);
	a[0]=0;
          
	
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=',') {a[num]=10*a[num]+s[i]-'0';}
		if(s[i]==','||s[i]=='\0') {num++;a[num]=0;}
		
    
	}
    for(i=0;i<=num;i++)
{
   if(a[i]==a[0]) same++;
}
           if(num==0) printf("No");
         else if(same==num+1) printf("No");
   else
{
	int max=0,secmax=0;
	for(i=0;i<=num;i++)
	{
		if(a[i]>=max) max=a[i];
	}
	for(i=0;i<=num;i++)
	{
		if(a[i]==max) a[i]=0;
	}
	for(i=0;i<=num;i++)
	{
		if(a[i]>=secmax) secmax=a[i];
	}
	printf("%d",secmax);
       }	
	
  
	
}