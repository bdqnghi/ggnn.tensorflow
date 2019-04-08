
int main()
{
	int i,j,len,n;
	char ch,str[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",str);
		len=strlen(str);
		for(j=0;j<len;j++)
		{
			
			switch(str[j])
			{
			case 'A':
				str[j]='T';
				break;
			case 'T':
				str[j]='A';
				break;
			case 'C':
				str[j]='G';
				break;
			case 'G':
				str[j]='C';
				break;
			}
		}
		printf("%s",str);
                printf("\n");
                
	}
	return 0;
}
