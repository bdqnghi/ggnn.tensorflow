int main()
{
	int i,j,len,n;
	char a[500],b[500];
	gets(a);
	len=strlen(a);
	for(j=0;j<len;j++)
	{
		for(i=0;i<len;i++)
		{
			if(i>=j)
				if((a[i-j]==a[i+j+1])&&(a[i-j+1]==a[i+j]))

			{				
				n=0;
				for(;n<=2*j+1;n++)
				{
					printf("%c",a[i-j+n]);}
				printf("\n");
			}
			else
				continue;
		}
	}
	return 0;
}
