
void main()
{
	int len,i,j;
	char line1[101]={'\0'},line2[101]={'\0'};
	gets(line1);
	len=strlen(line1);
	for(i=0;line1[i]==' ';i++);
	line2[0]=line1[i];
	i++;
	for (j=0;i<len;i++)
	{
		if (line1[i]==' ' && line2[j]==' ')
			continue;
		else
		{
			j++;
			line2[j]=line1[i];
		}
	}
	len=strlen(line2);
	if (line2[len-1]==' ')
		line2[len-1]='\0';
	printf("%s",line2);
}
