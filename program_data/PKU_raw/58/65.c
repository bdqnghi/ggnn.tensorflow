int main()//???????????,??????????
{
	int n;
	scanf("%d\n",&n);
	int *num;
	num=(int *)malloc(n*sizeof(int));
	int i,j;
	for(i=0;i<n;i++)
	{
		char *org;
		org=(char*)malloc(80*sizeof(char));
		gets(org);
		char *p;
		p=org;
		if(*p=='_'||isalpha(*p))
		{
			for(j=0;*(p+j)!='\0';j++)
			{
				if(isalpha(*(p+j))==0&&isdigit(*(p+j))==0&&*(p+j)!='_')
				{
					*(num+i)=3;					
				}
			}
			if(*(num+i)==3)*(num+i)=0;
			else *(num+i)=1;
			
		}
		else *(num+i)=0;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(num+i));
	}
}


