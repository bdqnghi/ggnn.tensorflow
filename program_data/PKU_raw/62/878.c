int main()
{
	char zfc[500];
	gets(zfc);
	int i,k,LEN;
	LEN=strlen(zfc);
	for(i=0;i<LEN-1;i++)
	{
		if(zfc[i]==' '&&zfc[i+1]==' ')
		{
			for(k=i+1;k<LEN-1;k++)
			{
				zfc[k]=zfc[k+1];
			}
			i=i-1; zfc[LEN-1]='\0';
		}
		
		LEN=strlen(zfc);
	}
	
	puts(zfc);
	return 0;
}