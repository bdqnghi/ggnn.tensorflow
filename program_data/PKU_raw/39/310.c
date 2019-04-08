int main()
{
	int n,i;
	scanf("%d",&n);
	struct f
	{
		char str[21];
		int score1,score2,article;//score1???????? score2??????
		char a,b;
		int prize;
	}*p;
	p=(struct f*)malloc(n*sizeof(struct f));
	for(i=0;i<n;i++)
	{   (p+i)->prize=0;
		scanf("%s %d %d %c %c %d",(p+i)->str,&((p+i)->score1),&((p+i)->score2),&((p+i)->a),&((p+i)->b),&((p+i)->article));
	if((p+i)->score1>80&&(p+i)->article>0)  (p+i)->prize+=8000;
	if((p+i)->score1>85&&(p+i)->score2>80)  (p+i)->prize+=4000;
	if((p+i)->score1>90) (p+i)->prize+=2000;
	if((p+i)->score1>85&&(p+i)->b=='Y') (p+i)->prize+=1000;
	if((p+i)->score2>80&&(p+i)->a=='Y') (p+i)->prize+=850;
	}
	long int sum=0;
    for(i=0;i<n;i++)  
	{
		sum+=(p+i)->prize;
	}
	char *p1;
	int max=0;
	for(i=0;i<n;i++)//????????????max?
		if((p+i)->prize>max)
		{
			max=(p+i)->prize;
			p1=(p+i)->str;
		}
		printf("%s\n%d\n%ld",p1,max,sum);
}
