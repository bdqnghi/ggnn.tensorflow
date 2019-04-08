void main()
{
  int i,maxnum,max,n;
  char *p1,str1[20],str2[20],strcopy[20],*p3;
  while(scanf("%s %s",str1,str2)!=EOF)
  {
	p1=str1;
	p3=strcopy;
    for(i=0,max=0;str1[i]!='\0';i++)
	if(str1[i]>max) 
	{
	 max=str1[i];
	 maxnum=i;
	}
	strcpy(strcopy,str1);
	*(p3+maxnum+1)='\0';
	strcat(strcopy,str2);
	for(p1=&str1[maxnum+1],p3=&strcopy[maxnum+4];*p1!='\0';p1++,p3++)
		*p3=*p1;
	n=strlen(str1);
	strcopy[n+3]='\0';
	puts(strcopy);
  } 
}