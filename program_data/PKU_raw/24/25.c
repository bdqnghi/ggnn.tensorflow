
void main()
{
	char str[80][80],str1[80];
	int i=0,j=0,min=80,max=0,num=0,k,t,len,len1,lens;
	gets(str1);
	lens=strlen(str1);
  for(j=0;str1[j]!='\0';j++)
	{
		str[num][i++]=str1[j];
		k=i;
		if(str1[j]==' '||str1[j]=='\n')
		{
			str[num][i-1]='\0';
			num++;
				i=0;
		}
		t=num;
	
	}
	str[t][k]='\0';
	for(i=lens-1;;i--)
		if(str1[i]==' ')
		{
			k=i;
			break;
		}
 		j=0;
       for(i=k+1;i<lens;i++)
   str[t+1][j++]=str1[j];
   str[t+1][j]='\0';
	for(i=0;i<t+1;i++)
	{
		len1=strlen(str[i]);
		max=max>len1?max:len1;
		min=min<len1?min:len1;
	}
	for(i=0;i<t+1;i++)
	{
         len=strlen(str[i]);
		if(max==len)
		{
			printf("%s\n",str[i]);
			break;
		}
	}
	for(i=0;i<t+1;i++)
	{
		len=strlen(str[i]);
		if(min==len)

		{	
			printf("%s\n",str[i]);
			break;
		}
	}
}
    
 
 
 
