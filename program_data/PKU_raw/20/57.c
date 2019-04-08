void main()
{
	int i,j,l,max;
	char str[15],substr[3];
    while(scanf("%s%s",str,substr)!=EOF)//scanf???????????????????????
	{
		l=strlen(str);
		max=0;
		for(i=0;i<l;i++)
		{
			if(str[max]<str[i])
				max=i;
		}
		for(j=l-1;j>max;j--) str[j+3]=str[j];
		for(j=max+1;j<max+4;j++) str[j]=substr[j-max-1];
		for(j=0;j<l+3;j++) printf("%c",str[j]);
		printf("\n");
	}
}