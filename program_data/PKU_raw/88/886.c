int main()
{
	char *a;
	int i,*symbol;
	a=(char*)malloc(30*sizeof(char));
	gets(a);
	symbol=(int*)malloc(strlen(a)*sizeof(int));
	for(i=0;a[i]!=0;i++)
	{
		if((*(a+i)=='1')||(*(a+i)=='2')||(*(a+i)=='3')||(*(a+i)=='4')||(*(a+i)=='5')||(*(a+i)=='6')||(*(a+i)=='7')||(*(a+i)=='8')||(*(a+i)=='9')||(*(a+i)=='0'))
		{
			*(symbol+i)=1;
			printf("%c",*(a+i));
		}
		else
		{
			*(symbol+i)=0;
			if(*(symbol+(i-1))==1)printf("\n");
		}
	}
	free(a);
	free(symbol);
	return 0;
}



