int main()
{
	char s[100000],*p;
	p=s;
	gets(p);
	int num[300]={0},*q,i,j=0,k=0,m=0;
	q=num;
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)!=' ')
		{
			*(q+k)=*(q+k)+1;
			j=1;
		}
		else if(*(p+i)==' '&&j==1)
		{
			k=k+1;
			j=0;
			m=k;
		}
	}
	if(m==0) printf("%d",*q);
	else
	{
		for(i=0;i<m;i++)
			printf("%d,",*(q+i));
		printf("%d",*(q+m));
	}
return 0;
}