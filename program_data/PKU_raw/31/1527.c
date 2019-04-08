struct stu
{char c[100];
 struct stu *previous;
};
int n;
struct stu *creat(void)
{
	struct stu *p,*q;
	n=0;
	p=q=(struct stu *)malloc(Len);
	gets(p->c);
	for(;strcmp(p->c,"end")!=0;)
	{
		n++;
		if(n==1) p->previous=Null;
		else 
		{
			p=(struct stu *)malloc(Len);
			p->previous=q;
			q=p;
			gets(p->c);
		}
	}
	return(p);
}
void main()
{
	struct stu *p;
	p=creat();
	p=p->previous;
	for(;p!=Null;)
	{
		printf("%s\n",p->c);
		p=p->previous ;

	}
}




