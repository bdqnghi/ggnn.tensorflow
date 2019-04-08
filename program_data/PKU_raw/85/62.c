
int main(int argc, char* argv[])
{
	char s[20];
	int i,j;
	int len;
	int k=0;
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		k=0;
		/*  ????????????????
		 *  ????j=0??s[0]??????VC????????'\0'?
		 *  ???????????????
		for(j=0;s[j]!='\0';j++)
		{
			scanf("%c",&s[j]);
		}
		*/
		//??????????
		
		scanf("%s",s);    //???????????
		
		//s[j]='\0';

		len=strlen(s);
		if((s[0]=='_')||((s[0]>='A')&&(s[0]<='Z'))||((s[0]>='a')&&(s[0]<='z')))
		{
			for(j=1;j<len;j++)
			{
				if((s[j]=='_')||((s[j]>='A')&&(s[j]<='Z'))||((s[j]>='a')&&(s[j]<='z'))||((s[j]>='0')&&(s[j]<='9')))
				{
					k++;
				}
			}
			if(k==(len-1))
			{
				printf("yes\n");
			}
			if(k!=(len-1))
			{
				printf("no\n");
			}
		}
		else
		{
			printf("no\n");
		}
	}
	
	return 0;
}