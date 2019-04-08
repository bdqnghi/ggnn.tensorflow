int main()
{
	int n,i,j;
	char s[256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s);
		int len=strlen(s);
		for(j=0;j<len;j++)
		{
			if(j!=len-1)
			{
				switch(s[j]){
				   case 'A':printf("%c",'T');break;
				   case 'T':printf("%c",'A');break;
				   case 'C':printf("%c",'G');break;
				   case 'G':printf("%c",'C');break;
				}
			}
			else
			{
				switch(s[j]){
				   case 'A':printf("%c\n",'T');break;
				   case 'T':printf("%c\n",'A');break;
				   case 'C':printf("%c\n",'G');break;
				   case 'G':printf("%c\n",'C');break;
				}
			}
		}
	}
	return 0;
}