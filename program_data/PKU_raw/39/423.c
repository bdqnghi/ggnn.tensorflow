int main()
{
struct person
{char name[20];
int pro1;
int pro2;
char c1;
char c2;
int papers;
int money;
}//stu[1]={"aA",87,82,'Y','N',0,0}//"bB",88,78,'N','Y',1,0,"cC",92,88,'N','N',0,0,"dD",83,87,'Y','N',1,0,"bb",92,80,'Y','Y',1,0}
;

long int i,N,max=0;
long int all=0;
scanf("%d\n",&N);
struct person *stu=(struct person *)malloc(N*sizeof(struct person));
for(i=0;i<N;i++){
scanf("%s%d%d %c %c %d\n",&stu[i].name,&stu[i].pro1,&stu[i].pro2,&stu[i].c1,&stu[i].c2,&stu[i].papers);
stu[i].money=0;
if(stu[i].papers>=1&&stu[i].pro1>80)stu[i].money=stu[i].money+8000;
if(stu[i].pro1>85&&stu[i].pro2>80)stu[i].money=stu[i].money+4000;
if(stu[i].pro1>90)stu[i].money=stu[i].money+2000;
if(stu[i].pro1>85&&stu[i].c2=='Y')stu[i].money=stu[i].money+1000;
if(stu[i].pro2>80&&stu[i].c1=='Y')stu[i].money=stu[i].money+850;
if(max<stu[i].money) max=stu[i].money;
all=all+stu[i].money;}
for(i=0;i<N;i++)
{if(stu[i].money==max)
{printf("%s\n%d\n%d",stu[i].name,stu[i].money,all);
break;}
}
return(0);
}
