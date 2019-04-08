void main()
{
	char str[3000];
	gets(str);
	int i,len,j=0;
	len=strlen(str);
      for(i=0;i<len;i++)
	  {
         	if(str[i]!=' ') j++;
			else { if(j!=0) {printf("%d",j); if(i<len-1) printf(",");j=0;}}
			
	  }
	  j=0;
	   for(i=0;i<len;i++)
	  {
         	if(str[i]!=' ') j++;
			else j=0;
	  }
	   printf("%d\n",j);
}