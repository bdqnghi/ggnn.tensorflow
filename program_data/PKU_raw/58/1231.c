int panduan(char *p)
{
	int z=1,i,j,k;
	if(!(((*p>='a')&&(*p<='z'))||((*p>='A')&&(*p<='Z'))||(*p=='_')))
		z=0;
	else
	{
		for(i=1;*(p+i)!='\0';i++)
		{
			if(!(((*(p+i)>='a')&&(*(p+i)<='z'))||((*(p+i)>='A')&&(*(p+i)<='Z'))||(*(p+i)=='_')||(*(p+i)>='0'&&*(p+i)<='9')))
			{
				z=0;
				break;
			}
		}
	}
	return (z);
}
void main()
{
	int panduan(char *p);
	int m,n,i,j,k;
	char *p,**q,**Q;
	scanf("%d\n",&m);
	q=(char**)malloc(m*sizeof(char*));
	Q=q;
	for(i=0;i<m;i++)
	{
		p=(char*)malloc(80*sizeof(char));
		for(j=0;j<80;j++)
		{
			*(p+j)='\0';
		}
		gets(p);
		*q=p;
		q++;
	}
	for(i=0;i<m;i++,Q++)
	{
		printf("%d\n",panduan(*Q));
	}
}