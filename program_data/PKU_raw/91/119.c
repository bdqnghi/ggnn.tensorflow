int main()
{
	char A[105]={'\0'};
	int len;
	int i;
	char *pt,*pt1,temp;
	pt=A;
	gets(pt);
	len=strlen(A);
	pt1=&temp;
	*pt1=*pt;
	for(i=0;i<len-1;i++)
	{
		*pt= *pt + *(pt+1);
		pt++;
	}
	*pt= *pt + *pt1 ;
	pt=A;
	puts(pt);
	return 0;
}