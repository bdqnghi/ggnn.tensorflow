int main()
{
	char str[101],str1[101]={'a'};
	int len,i,j,a,k,b=0;
	gets(str);
	len=strlen(str);
	for(j=0;j<len;j++)
		if(str[j]==' ')
			break;
	if(j==len)
		printf("%s",str);
	else

	{
		for(j=len-1;j>=0;j--)
		if(str[j]==' ')
		{	j--;
		continue;}
	else break;
	for(i=j;i>=0;i--)
		if(str[i]==' ')
		{
			a=i;
			for(j=i+1,k=b;(str[j]!=' ')&&(j<len);j++,k++)
				str1[k]=str[j];
			str1[k]=' ';
			b=k+1;
		}
	
	for(i=0;i<a;i++,k++)
       str1[k+1]=str[i];
    printf("%s",str1);

	}
	return 1;
}
