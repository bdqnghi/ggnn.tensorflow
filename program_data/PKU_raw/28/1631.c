int main()
{
	char w[1000]={32},s[300][50]={'0'};
	int i=0,j=0,k;
	gets(w);
	while(w[i]!='\0')
	{
		k=0;
		while(w[i]!=32&&w[i]!='\0')
		{
			s[j][k]=w[i];
			i++;
			k++;
		}
		s[j][k]='\0';
		j++;
		while(w[i]==32)
		{
			i++;
		}
	}
	for(i=0;i<j;i++)
	{
		if(i==0) printf("%d",(int)strlen(s[i]));
		else printf(",%d",(int)strlen(s[i]));
	}
        return 0;
}

