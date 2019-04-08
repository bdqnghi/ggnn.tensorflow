void main()
{
	char ori[102],*ptr,qp,*head,*tail;
	int i,n;
	gets(ori);
	n=strlen(ori);
	ptr=&ori[0];
	for(i=0;i<n-1;i++)
	{
		qp=*ptr+*(ptr+1);
		printf("%c",qp);
		ptr++;
	}
	head=&ori[0];
	tail=&ori[n-1];
	qp=*head+*tail;
	printf("%c\n",qp);
}
