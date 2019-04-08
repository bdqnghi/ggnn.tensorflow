void main()
{
	char str[14]={0},substr[4]={0},max;
	int i,imax,l,j;
	while(scanf("%s%3s",str,substr)!=EOF)
	{
		i=0;
		imax=0;
		max=str[0];
		while(str[i])
		{
			if(str[i]>max)
			{
				max=str[i];
				imax=i;
			}
			i++;
		}
		l=strlen(str);
		for(i=l;i>imax;i--)
			*(str+i+3)=*(str+i);
		for(i=imax+3,j=2;i>imax;i--,j--)
			*(str+i)=*(substr+j);
		puts(str);
	}
}