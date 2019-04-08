void main()
{
	char str[124],*p=str;
	int i,j,n,k;
	gets(str);
	n=strlen(str);
    for(i=n-1,j=i;i>0;i--)
	{
		if(*(p+i)==' ') 
		{
			for(k=i+1;k<=j;k++) printf("%c%s",*(p+k),k==j? " ":"");
			j=i-1;
		}
	}
	for(i=0;*(p+i)!=' '&&*(p+i)!='\0';i++) printf("%c",*(p+i));
	
}
