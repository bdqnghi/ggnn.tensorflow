int main()
{
	int n,a,b,c,len;
	unsigned maxlen,minlen;
	char max[20],min[20];
	char cen[20];
	scanf("%s",&cen);
	len=strlen(cen);
	maxlen=minlen=len;
	strcpy(max,cen);
	strcpy(min,cen);
	while(getchar()!='\n')
	{
		scanf("%s",&cen);
		if(strlen(cen)>maxlen)
		{
		strcpy(max,cen);
		maxlen=strlen(cen);
		}
		if(strlen(cen)<minlen)
		{			
		strcpy(min,cen);
		minlen=strlen(cen);
		}

	}
	printf("%s\n",max);
	printf("%s\n",min);
	
}
