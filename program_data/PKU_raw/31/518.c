struct stu
{
	char xuehao[20];
	char xingming[30];
	char xingbie;
	int nianling;
	char defen[10];
	char dizhi[20];
	struct stu *last;
};
main()
{
struct  stu  a[10000],*p;
int i=0;
a[0].last=NULL;
for(;;i++)
{
scanf("%s",a[i].xuehao);
if(a[i].xuehao[0]=='e')
break;
scanf("%s %c %d %s %s",a[i].xingming,&a[i].xingbie,&a[i].nianling,a[i].defen,a[i].dizhi);
if(i>0)
{
a[i].last=a+i-1;
}
p=(a+i);
}

while(p!=NULL)
{
printf("%s %s %c %d %s %s\n",p->xuehao,p->xingming,p->xingbie,p->nianling,p->defen,p->dizhi);
p=p->last;
}
}