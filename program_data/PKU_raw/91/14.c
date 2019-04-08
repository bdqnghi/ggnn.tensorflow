
int main()
{
    char s[200],f[200],*ps=s,*pf=f;

    int len,i;

	gets(ps);

	len=strlen(s);

	for(i=0;i<len-1;i++){

		*(pf+i)=*(ps+i)+*(ps+i+1);
	}

	*(pf+len-1)=*(ps)+*(ps+len-1);

	*(pf+len)='\0';

	printf("%s",f);



	

	return 0;
}