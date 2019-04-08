int main()
{
	char *a;
	int i,*symbol,k;
	a=(char*)malloc(1000*sizeof(char));
	symbol=(int*)malloc(1000*sizeof(int));
	gets(a);
	for(i=0;*(a+i)!='\0';i++)
	{
		if(*(a+i)==' ')*(symbol+i)=0;
		else *(symbol+i)=1;
	}
	for(i=1;*(a+i)!='\0';i++)
	{
		if((*(symbol+(i-1))==0)&&(*(a+i)==' '))
		{
			for(k=i;*(a+k)!='\0';k++)
			{
				*(a+k)=*(a+(k+1));
				*(symbol+k)=*(symbol+(k+1));
			}
			i=i-1;
		}
	}
	puts(a);
	free(a);
	free(symbol);
	return 0;
}