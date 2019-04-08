int cprx(const void *e1,const void *e2)
{
    float *a,*b;
    a=(float *)e1;
    b=(float *)e2;
    if (*a-*b<0) return -1;
    else return 1;
}
int cprd(const void *e1,const void *e2)
{
    float *a,*b;
    a=(float *)e1;
    b=(float *)e2;
    if (*a-*b>0) return -1;
    else return 1;
}
int main()
{
   float male[40],female[40],tmph;
   int m=0,f=0,n,i;
   char sex[10];
   scanf("%d",&n);
   for (i=0;i<n;i++)
   {
       scanf("%s %f",sex,&tmph);
       if (sex[0]=='m') male[m++]=tmph;
       else female[f++]=tmph;
   }
   qsort(male,m,sizeof(float),cprx);
   qsort(female,f,sizeof(float),cprd);
   for (i=0;i<m;i++)
     printf("%.2f ",male[i]);
   for (i=0;i<f-1;i++)
     printf("%.2f ",female[i]);
   printf("%.2f",female[i]);
   return 0;
}
