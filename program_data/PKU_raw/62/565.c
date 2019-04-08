void main()
{
	int i,j,k,l,m,n;
	char c[100],*q;
	q=c;
	gets(q);
	for (i=0;*(q+i)!='\0';i++)
	{
		if (*(q+i)==' '&&*(q+i+1)==' ')
		{
			for (j=i;*(q+j)!='\0';j++)
			{
				*(q+j)=*(q+j+1);
			}
			i--;
		}
	}
	puts(q);
}