void main()
{
	int n,i,j,k;
	char *str[100];
	char **p;
	p=str;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		*(p+i)=(char*)calloc(10000,sizeof(char));
		gets(*(p+i));
	}
	for(k=0;k<n;k++)
	{
		if((**(p+k)<='Z'&&**(p+k)>='A')||(**(p+k)<='z'&&**(p+k)>='a')||**(p+k)=='_')
		{
			for(i=0;*(*(p+k)+i)!='\0';i++)
			{	
				if((*(*(p+k)+i)<='Z'&&*(*(p+k)+i)>='A')||(*(*(p+k)+i)<='z'&&*(*(p+k)+i)>='a')||(*(*(p+k)+i)<='9'&&*(*(p+k)+i)>='0')||*(*(p+k)+i)=='_')
					;
				else
				{	printf("0\n");break;}
				if(*(*(p+k)+i+1)=='\0')   /*????????????????????*/
					printf("1\n");
			}
		}
		else
			printf("0\n");
	}
}
					




