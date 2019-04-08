int main()
{
	char str[20],c,substr[8];
	int n,max,i;
	while(1)
	{
		max=0;
		c=getchar();
		if(c=='\n')
			c=getchar();
		if(c==EOF)
			break;
		else
		{
			scanf("%s%s",&str,&substr);
			n=strlen(str);
			for(i=n-1;i>=0;i--)
				str[i+1]=str[i];
			str[0]=c;
			str[++n]=0;
			for(i=1;i<n;i++)
				if(str[i]>str[max])
					max=i;
			for(i=0;i<=max;i++)
				printf("%c",str[i]);
			printf("%c%c%c",substr[0],substr[1],substr[2]);
			for(;i<n;i++)
				printf("%c",str[i]);
			putchar('\n');
		}
	}
}