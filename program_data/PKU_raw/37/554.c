

int main()
{
    char a[1000];
    int b[26];
    int i, j, len, index,t,k;
    int flag = 0;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		flag=0;
		scanf("%s", a);
		len = strlen(a);
		for (i = 0; i < 26; i++)
			b[i]=0;
		
		for (j = 0; j < len; j++)
		{
			index = a[j]-'a';  
			b[index]++;                      
		}
		for (j = 0; j < len; j++)
		{
			if (b[a[j]-'a'] == 1) 
			{
				printf("%c\n", a[j]);
				flag = 1;
				break;
			}
		}
		if (flag==0)
			printf("no\n");
	}
	
    return 0;
}
