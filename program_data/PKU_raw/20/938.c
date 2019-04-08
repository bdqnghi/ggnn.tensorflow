void main()
{
	int n,i,j=0,m;
	char str[20],substr[5];
    while(scanf("%s %s",str,substr)!=EOF)
	{
		   n=strlen(str);
	       for(i=0;i<n;i++)
		   {
		    if(str[i]>str[j])
			j=i;
		   }
	for(i=n-1;i>=j+1;i--)
		str[i+3]=str[i];
    str[i+1]=substr[0];
    str[i+2]=substr[1];
    str[i+3]=substr[2];
	str[n+3]='\0';
	printf("%s\n",str);
	j=0;
	}
}