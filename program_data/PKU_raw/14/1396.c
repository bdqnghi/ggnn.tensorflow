struct student
{
        int num;
        int sum;
}stu[100000];

int main()
{

   int n,i,j,t,a,b,m;
   int tempSum;
   int tempMax;
   int rank[3]={0};
   scanf("%d",&n);
   //struct student * stu;
   //stu = (struct student *)malloc(sizeof(struct student) * n);
   for(i=0;i<n;i++)
   {
        tempSum = 0;
           scanf("%d",&stu[i].num);
           stu[i].sum = 0;
           for(j=0;j<2;j++){
            scanf("%d",&tempSum);
            stu[i].sum += tempSum;
           }
   }
   for(b=0;b<3;b++)
   {
       tempMax = 0;
       for(a=b;a<n;a++)
       {
           if(stu[a].sum > tempMax){
            tempMax = stu[a].sum;
            rank[b] = a;
           }
       }
       t = stu[b].num;
       stu[b].num = stu[rank[b]].num;
       stu[rank[b]].num = t;
       t = stu[b].sum;
       stu[b].sum = stu[rank[b]].sum;
       stu[rank[b]].sum = t;
   }
   for(a=0;a<3;a++)
   printf("%d %d\n",stu[a].num,stu[a].sum);

  return 0;
}
