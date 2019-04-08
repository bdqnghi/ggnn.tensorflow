void main()
{
	char *p,*p1,*head,*head1;
	p=(char*)malloc(100*sizeof(char));
	head=p;
	p1=(char*)malloc(100*sizeof(char));
	head1=p1;
	gets(p);
	for(;*(p+1)!='\0';p++)
	{
		*p1=*(p)+*(p+1);
		p1++;
	}
	*p1=*p+*head;
	*(p1+1)='\n';
	for(p1=head1;*p1!='\n';p1++)
		printf("%c",*p1);
}