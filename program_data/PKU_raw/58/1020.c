


int main()
{
	char *p,str[81];
	int rd,n;
	scanf("%d",&n);
	getchar();
	for(rd=0;rd<n;rd++)
	{
		gets(str);
		p=str;
		for(;p<&str[strlen(str)];p++)
		{
			if(!(Check)&&p==str)
			{
				printf("0\n");
				break;
			}else{
				if(!(Check||(*p>='0'&&*p<='9')))
				{
					printf("0\n");
					break;
				}else if(p==&str[strlen(str)-1]){
					printf("1\n");
				}
			}
		}
	}
	return 0;
}