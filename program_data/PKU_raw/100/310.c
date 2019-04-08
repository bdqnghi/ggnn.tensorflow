void main()
{
	
 
	char str[1000],c;
	char string[26];
	int  i,j,k, a[26] ;
	gets(str);
	j=0;
	for (c='a';c<='z';c++)
		for (i=0;str[i]!='\0';i++)
		{
			if (str[i]==c)
			{
				string[j]=c;
				a[j]=0;
				for (k=i;str[k]!='\0';k++)
					if (str[k]==c)
						a[j]=a[j]+1;
					j=j+1;
					break;
			}
		}
		if (j==0)
			printf("No");
		else
		{
		string[j]='\0';
		for(i=0;i<j;i++)
			printf("%c=%d\n",string[i],a[i]);
		}
}


 
  