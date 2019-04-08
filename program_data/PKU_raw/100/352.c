void min(char str[])
{   
	char str1[1000]={'\0'},str2[1000]={'\0'},m;
	int b,i,j,t,k=0,n=0,p;
	b=strlen(str);
    for(i=0;i<b;i++)
	{ if(str[i]<'a'||str[i]>'z')
	str[i]='0';}
	for(i=0;i<b;i++)
		if(str[i]=='0')
			n++;
		if(n!=b){
   for(i=0;i<b;i++)
	{  
		t=1;
		if(str[i]!='0')
		{
			for(j=1,t=0;j<b-i;j++)
			{
				if(str[i]==str[i+j])
				{str[i+j]='0';t++;}
			}
			str1[k]=t+1;
            k++;
		}
   }
  for(i=0,j=0;i<b;i++)
	{
		if(str[i]!='0')
		{str2[j]=str[i];j++;}
	}
  for(i=0;i<j;i++)
	  for(k=0;k<j-i;k++)
		  if(str2[k]<str2[k+1])
		  {
		  m=str2[k];
		  str2[k]=str2[k+1];
		  str2[k+1]=m;
             p=str1[k];
		  str1[k]=str1[k+1];
		  str1[k+1]=p;
        
		  }
   for(i=0;i<j;i++)
	   printf("%c=%d\n",str2[j-1-i],str1[j-i-1]);}
		else printf("No\n");
}
void main()
{
	char str[1000]={'\0'};
	gets(str);
	min(str);
}