void main()
{
	char str[100];
	int len,i,length=0,j;
	gets(str);
	len=strlen(str);
	for(i=len-1;i>=0;i--)
	{
		if (str[i]!=' ')
		length=length+1;      
	    else if(str[i]=' '&&str[i+1]!=' ')
		{
			j=i;
			for (j=i+1;j<=i+length;j++)
		printf("%c",str[j]);
		printf(" ");
		length=0;}
	}
	if (i==-1&&str[0]!=' ')    /*??????str[0]???????*/
			  { for(i=0;i<length;i++)
			  printf("%c",str[i]);}
}
