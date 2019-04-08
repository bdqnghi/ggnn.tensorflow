struct stu
{
 char name[25];
 int score1;
 int score2;
 char a;
 char b;
 int num;
 int sum;
};
void main()
{
 int i,n,t=0,pos,max;
 struct stu *p1;
 scanf("%d",&n);
 p1=(struct stu*)calloc(n,sizeof(struct stu));
 for(i=0;i<n;i++)
 {
  scanf("%s %d %d %c %c %d",p1[i].name,&(p1[i].score1),&(p1[i].score2),&(p1[i].a),&(p1[i].b),&(p1[i].num));
  if(p1[i].score1>80&&p1[i].num>=1)
   {
    p1[i].sum+=8000;
    t+=8000;
   }
  if(p1[i].score1>85&&p1[i].score2>80)
   {
    p1[i].sum+=4000;
    t+=4000;
   }
  if(p1[i].score1>90)
   {
    p1[i].sum+=2000;
    t+=2000;
   }
  if(p1[i].score1>85&&p1[i].b=='Y')
   {
    p1[i].sum+=1000;
    t+=1000;
   }
  if(p1[i].score2>80&&p1[i].a=='Y')
   {
    p1[i].sum+=850;
    t+=850;
   }
 }
 max=p1[0].sum;
 for(i=1;i<n;i++)
  if(p1[i].sum>max)
   {
    pos=i;
    max=p1[i].sum;
   }
 printf("%s\n%d\n%d",p1[pos].name,p1[pos].sum,t);
}

   