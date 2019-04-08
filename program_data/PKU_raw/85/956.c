int main()
{
	int n,i;
	char a[100][21],*p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);
		p=a[i];
		
		while(*p!='\0')
		{
			if(a[i][0]>='0'&&a[i][0]<='9')
			{
				printf("no\n");
				break;
			}
            if((*p>='0'&&*p<='9')||(*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')||*p=='_')
			{
				p++;
			}
			else {
				printf("no\n");
				break;
			}
			if(*p=='\0')
			{
				printf("yes\n");
			}
		}
			
	}
	return 0;
}