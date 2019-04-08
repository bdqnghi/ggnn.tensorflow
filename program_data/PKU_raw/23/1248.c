void main()
{
	int i=0,j=0,k=0;
	char ch1[100],ch2[100][100],ch3[100];
	gets(ch1);
	while(ch1[i]!='\0')
	{
		if(ch1[i]!=' ')
		{
			ch3[j]=ch1[i];
			j++;
		}
		else
		{
			ch3[j]='\0';
			strcpy(ch2[k],ch3);
			k++;
			j=0;
		}
		i++;		
	}
	ch3[j]='\0';
	strcpy(ch2[k],ch3);
	for(;k>0;k--)
	printf("%s ",ch2[k]);
	printf("%s",ch2[0]);
}