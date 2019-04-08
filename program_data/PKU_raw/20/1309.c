int main()
{
	char str[14],cmax,substr[4];
	int i,m,j,n;
	while (scanf("%s %s",str,substr)!=EOF)
	{
		cmax=str[0];m=0;
		for(i=1;;i++)
		{
			if(str[i]=='\0') {n=i;break;}
			else if(str[i]>cmax) 
			{
					cmax=str[i];
					m=i;
			}
		}str[n+3]='\0';
		for(i=n+2,j=n-1;;i--,j--)
		{
			str[i]=str[j];
			if(j==m+1) break;
		}
		for(i=m+1,j=0;j<=2;i++,j++)
		{
			str[i]=substr[j];
		}
		printf("%s\n",str);
	}
}