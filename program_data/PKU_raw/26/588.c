int main()
{
	char str1[100],str2[100],c;
	int i=0,j=0,k=0;
	gets(str1);
	while((c=str1[i])!='\0')
		i++;
	do{
		str2[j++]=str1[k++];
		while((str1[k-1]==' ')&&(str1[k]==' '))
			k++;
	}
	while(k<i);
	for(i=0;i<j;i++)
		printf("%c",str2[i]);
	return 0;
}