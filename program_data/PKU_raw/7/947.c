int main()
{
	char string[500],substring[500],replacement[500],temp,str[500];
	int i,j,k,l,m,len0,len1,len2;
	gets(string);
	
	gets(substring);
	
	gets(replacement);
	
	len1=strlen(substring);
	
	len2=strlen(replacement);
	
	len0=strlen(string);
	
	strcpy(str,string);
	
	for(i=0;i<len0;i++)
	{
		if(string[i]==substring[0])
		{
		  for(j=1;j<len1;j++)
		  {
			if(	string[i+1]==substring[j])
				i++;
			else
			{	j=0;
				break;
			}
		  }
		  
		  if(j==len1)
		  {
			k=i;
			for(i;i<len0-len1+len2;i++)
			{
				str[i-len1+len2]=string[i];
			}
			for(l=0;l<len2;l++)
			{
				str[k-len2+1+l]=replacement[l];
			}
		  }
		else 
			m=0;
		}
	}
		
	puts(str);
     return 0;
}	