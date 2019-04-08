int main()
{
	char *p;
	int i,j,k,num=0;
	p=(char *)malloc(10000*sizeof(char));
	gets(p);
	for (i=0;i<strlen(p)-num;i++)
	{
		if (*(p+i)==' '&&*(p+i+1)==' ')
		{
			k=i;
			for (j=i+1;j<strlen(p)-num;j++,i++)
				*(p+i)=*(p+j);
			num++;
			i=k-1;
		}
	}
	for (i=0;i<strlen(p)-num;i++)
		printf("%c",*(p+i));
	return 0;
}