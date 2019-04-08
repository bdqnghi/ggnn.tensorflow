struct member{
	char name[100];
	int a;
	int b;
	char O;
	char W;
	int x;};
int money(struct member p)
{
	int m=0;
    if(p.a>80&&p.x>=1)m+=8000;
	if(p.a>85&&p.b>80)m+=4000;
	if(p.a>90)m+=2000;
	if(p.a>85&&p.W=='Y')m+=1000;
	if(p.b>80&&p.O=='Y')m+=850;
	return m;
}
int main()
{
	struct member p[100];
	int N,i,m[100],max=0,co;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%s %d %d %c %c %d",p[i].name,&p[i].a,&p[i].b,&p[i].O,&p[i].W,&p[i].x);
		m[i]=money(p[i]);}
	for(i=0;i<N;i++)
		if(m[i]>max){max=m[i];co=i;}
	int sum=0;
	for(i=0;i<N;i++)sum+=m[i];
	printf("%s\n%d\n%d\n",p[co].name,m[co],sum);
}