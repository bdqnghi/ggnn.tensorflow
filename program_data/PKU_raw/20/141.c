
void main()
{
	char str[15],substr[4];
	int i,j,max,c;

    while(scanf("%s %s",str,substr)!=EOF)
	{
	for(i=1,max=str[0],c=0;str[i]!='\0';i++)
	{
		if(str[i]>max)
		{
			max=str[i];
			c=i;
		}
	}
	for(j=i+3;j>c+3;j--)
		str[j]=str[j-3];

	str[c+1]=substr[0];
	str[c+2]=substr[1];
	str[c+3]=substr[2];
	printf("%s\n",str);
	}
}