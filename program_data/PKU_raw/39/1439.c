struct student
{
	char name[20];
    int fin;
	int py;
	char o;
	char w;
	int num;
};
long f(struct student s)
{
	long scholarship=0;
	if(s.fin>80&&s.num>=1)
		scholarship+=8000;
	if(s.fin >85&&s.py>80)
		scholarship+=4000;
	if(s.fin>90)
		scholarship+=2000;
	if(s.fin>85&&s.w=='Y')
		scholarship+=1000;
	if(s.py>80&&s.o=='Y')
		scholarship+=850;
	return(scholarship);
}
void main()
{
	int i,N;
	long max,sum=0;
    struct student st[100];
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
		scanf("%s %d %d %c %c %d",&st[i].name,&st[i].fin,&st[i].py,&st[i].o,&st[i].w,
			&st[i].num);
	}
	max=f(st[0]);
	sum=0;
	for(i=0;i<N;i++)
	{
		
		if(max<f(st[i]))
			max=f(st[i]);
		sum+=f(st[i]);
	}
	for(i=0;i<N;i++)
	{
		if(f(st[i])==max)
		{
			printf("%s\n",st[i].name);
			printf("%ld\n",max);
			printf("%ld\n",sum);
			break;
		}
	}
	

}
