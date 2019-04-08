void main()
{   int mas(char str[10]);
 
	int i,length,k;
	char str[11],substr[3],strs[13],strw[11];
	
	do
	{
    strcpy(strw,str);
	scanf("%s %s",str,substr);
	length=strlen(str);
	if(strcmp(strw,str)==0) break;

	k=mas(str);
	for(i=0;i<k;i++)
		strs[i]=str[i];
	for(i=0;i<3;i++)
		strs[k+i]=substr[i];
	for(i=0;i<length-k;i++)
		strs[k+3+i]=str[k+i];
	for(i=0;i<length+2;i++)
		printf("%c",strs[i]);
	printf("%c\n",strs[length+2]);
	}while(strlen(str)<11);
	//while(str[0]!='\0');
	
}
int mas(char stra[10])
{
	int i,k=0,j,length,m=0;
     length=strlen(stra);
	for(i=0;i<length;i++)
	{   m=0;
		for(j=0;j<length;j++)
		{	
			if(stra[i]<stra[j])
				m++;
		}
			if(m==0)
			{	k=i+1;
			break;}
			
		
	}
	 return(k);
}
