int main()
{
	char zfc[51]={0},s[51]={0},word[51]={0},temp[51]={0};
	int i,j,a=0,len1,len2;
	gets(zfc);
	for(i=0;i<51;i++)
	{
		if(zfc[i]==' ')
		{
			a=i;
			break;
		}
	}
	for(i=0;i<a;i++)
	{
		s[i]=zfc[i];
          }
	len1=strlen(zfc);
	for(i=0;i<=len1-a-1;i++)
	{
		word[i]=zfc[i+a+1];
	}
	len2=strlen(word);
	for(i=0;i<len2-1;i++)
	{
		for(j=0;j<a;j++)
		{
			temp[j]=word[j+i];
		}
		if(strcmp(temp,s)==0)
		{
			printf("%d",i);
			break;
		}
	}
	return 0;
}

