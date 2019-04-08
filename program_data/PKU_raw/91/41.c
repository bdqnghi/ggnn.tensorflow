int main()
{
	char a[101];
	gets(a);
	char *p=a;
	char *q;
	q=p;
	char b[101]={0};
	char *qp=b;
	char *m;
	m=qp;
	for(p=q+1;*p!='\0';p++){
		*qp=*(p-1)+*p;
		qp++;
	}
	*qp=(*q)+(*(p-1));
	qp=m;
	printf("%s\n",qp);
	return 0;
}