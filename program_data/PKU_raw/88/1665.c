int main()
{
	char a[1000];
	char *p;
	int len,i,j,st;
	p=a;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if((*(p+i)>=48)&&(*(p+i)<=57))
		{
			st=1;
		    printf("%c",*(p+i));
		}
		else
		{
			if(st==1)
			{
				printf("\n");
				st=0;
			}
			else
				st=0;
		}
	}



	return 0;
}