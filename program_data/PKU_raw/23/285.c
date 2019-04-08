int main()
{
	char str[100];
	int end,begin,len,i,j;
	gets(str);
	len=strlen(str);
	end=len-1;
	for (i=len;i>=0;i--)
		if (str[i]==' ' || i==0)
		{
			if (i==0) 
				begin=0;
			else
				begin=i+1;
			for (j=begin;j<=end;j++)
				printf("%c",str[j]);
			if (i!=0)
				printf(" ");
			end=i-1;
		}
	printf("\n");
	return 0;
}
	