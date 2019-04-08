int main()
{
	char *p;
	char string[100];
	p=string;
	int n;
	int i,legal=1;
	int count=0;
	scanf("%d\n",&n);
	while(count<n)
	{
		gets(p);
		i=0;
		if(!( (*p>=65 && *p<=90) || (*p>=97 && *p<=122) || (*p==95) ))
		{
			legal=0;
			printf("0\n");
		}else{
			while(*(p+i)!='\0')
			{
				if(!( (*(p+i)>=65 && *(p+i)<=90) || (*(p+i)>=97 && *(p+i)<=122) || (*(p+i)==95) || (*(p+i)>=48 && *(p+i)<=57) ))
				{
					legal=0;
					printf("0\n");
					break;
				}else{
					i++;
				}
			}
			if(legal==1)
				printf("1\n");
		}
		legal=1;
		count++;
		p=string;
	}
	return 0;
}