int main()
{
	char word[50][30];
	int length[50],i,j,wordnum,p,maxlength,minlength,max,min;
	for(i=0;i<=49;i++)
	{
		for(j=0;j<=11;j++) word[i][j]='\0';
	}
	for(i=0;i<=49;i++)
	{
		scanf("%s",word[i]);
		if(getchar()=='\n')
		{
			wordnum=i;
			break;
		}
	}
	for(i=0;i<=wordnum;i++) {length[i]=strlen(word[i]); }
	max=0;min=0;maxlength=length[0];minlength=length[0];
	for(i=0;i<=wordnum;i++)
	{
		if(length[i]>maxlength)
		{
			max=i;
			maxlength=length[i];
		}
		if(length[i]<minlength)
		{
			min=i;
			minlength=length[i];
		}
	}
	printf("%s\n%s\n",word[max],word[min]);
	return 0;
}
