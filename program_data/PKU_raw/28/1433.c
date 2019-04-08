char zfc[300][100];
int main()
{
	int i=0,len,len2=0;
	gets(zfc[1]);
	len=strlen(zfc[1]);
	while(i<len+1)
	{
		
		if(zfc[1][i]!=32)
		{
			len2+=1;
			i++;
		}
		else if(len2!=0)
		{
			printf("%d"",",len2);
			i++;
			len2=0;
		}
		else if(len2==0)
		{
			i++;
		}
		if(zfc[1][i+1]=='\0')
		{
			printf("%d",len2+1);
			break;
		}
	}
	return 0;
}