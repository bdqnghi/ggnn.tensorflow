void main()
{
	int b,num,i,j,l;
	char str[11],substr[4],str1[15],c;
	for(;;)
{
	
	for(i=0;i<11;i++) {str[i]='\0';}
	for(i=0;i<4;i++) {substr[i]='\0';}
	for(i=0;i<15;i++) {str1[i]='\0';}
	for(i=0;i<10;i++) 
	{if((c=getchar())==' ') break; 
	else str[i]=c;
	}
	if(feof(stdin)) break;
	gets(substr);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		b=0;
		for(j=i;j<l;j++)
		{if(str[i]<str[j]) {b=1; break;}}
		if(b==0)  {num=i; break;}
	}
	for(i=0;i<=num;i++)
	{str1[i]=str[i];}
	for(i=num+1;i<=num+3;i++)
	{str1[i]=substr[i-1-num];}
	for(i=num+4;i<l+3;i++)
	{str1[i]=str[i-3];}
	puts(str1);	
}	
}
