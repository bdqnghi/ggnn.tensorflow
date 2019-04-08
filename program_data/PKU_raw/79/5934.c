struct monkey
	{
		int number;
		int selected;
		struct monkey *next;
	};
void maintoo(int,int);
void main()
{
	
	int n[20],m[20],i,j;
	for(i=0;;i++)
	{
		scanf("%d%d",&n[i],&m[i]);
		if(!m[i]) break;
	}
	for(j=0;j<i;j++)
		maintoo(n[j],m[j]);
}
void maintoo(int n,int m)
{
	struct monkey *p1,*p_this,*p_next;
	int i;
	p1=(struct monkey *)malloc(sizeof(struct monkey));
	p_this=p1;
	for(i=1;i<n;i++)
	{
		p_this->number=i;
		p_this->selected=1;
		p_next=(struct monkey *)malloc(sizeof(struct monkey));
		p_this->next=p_next;
		p_this=p_next;
	}
	p_this->number=n;
	p_this->selected=1;
	p_this->next=p1;
	do
	{
		i=0;
		do
		{
			p_this=p_this->next;
			if(p_this->selected) i++;			
		}
		while(i<m);
		p_this->selected=0;
		n--;
	}
	while(n>0);
	printf("%d\n",p_this->number);
}
