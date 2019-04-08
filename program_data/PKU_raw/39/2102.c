
struct student{
	char mz[20];
	int cj;
	int py;
	char gb;
	char xb;
	int lw;
	int money;
};

int main(){
	int N,i,max,sum;
	scanf("%d",&N);
	struct student *stu=(struct student*)malloc(sizeof(struct student)*N);/*??????*/
	struct student *p;
	p=stu;
	for(i=0;i<N;i++,p++){
		scanf("%s %d %d %c %c %d",p->mz,&(p->cj),&(p->py),&(p->gb),&(p->xb),&(p->lw));/*????*/
	}
	p=stu;
	for(i=0;i<N;i++,p++){
		(p->money)=0;
		if (p->cj>80 && p->lw>0)
		{
			(p->money)+=8000;
		}
		if (p->cj>85 && p->py>80)
		{
			(p->money)+=4000;
		}
		if (p->cj>90)
		{
			(p->money)+=2000;
		}
		if (p->cj>85 && p->xb=='Y')
		{
			(p->money)+=1000;
		}
		if (p->py>80 && p->gb=='Y')
		{
			(p->money)+=850;
		}
	}/*?????*/
	sum=0;
	p=stu;
	for(i=0;i<N;i++,p++){
		sum+=(p->money);
	}/*?????*/
	max=0;
	for (i=0;i<N;i++)
	{
		if (stu[i].money>stu[max].money)
		{
			max=i;
		}
	}/*?????*/
	printf("%s\n%d\n%d\n",stu[max].mz,stu[max].money,sum);
	free(stu);
	return 0;
}
