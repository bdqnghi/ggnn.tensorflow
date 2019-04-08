

int relative(int *a,int len,int i);

void main()
{
	char s[MAX];
	int a[MAX];
	int len,i;

	gets(s);
	len=strlen(s);
	for(i=0;i<len;i++)
		*(a+i)=*(s+i);
	for(i=0;i<len;i++)
		printf("%c",relative(a,len,i));
	putchar('\n');
}

int relative(int *a,int len,int i)
{
	int result;
	int *p;
	if(i<len-1){
		p=a+i;
		result=*p+*(p+1);
		return result;
	}
	else{
		p=a+i;
		result=*p+*a;
		return result;
	}
}