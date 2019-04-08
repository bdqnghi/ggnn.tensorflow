void main()
{
	char str[15],substr[4];
	int flag,max,length,i;
	flag=0;
	while (scanf("%s%s",str,substr)==2)
	{
		max=0;
		length=strlen(str);
		for (i=0;i<=length-1;i++)	if (str[i]>str[max]) max=i;
		for (i=length-1;i>=max+1;i--) str[i+3]=str[i];
		str[length+3]='\0';
		for (i=0;i<=2;i++) str[max+1+i]=substr[i];
		if (flag) printf("\n");
		else flag=1;
		printf("%s",str);
	}
}