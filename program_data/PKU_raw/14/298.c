int pfCompare(const void* elem1,const void* elem2)
{
     int d;
     d=*((int*)elem2)-*((int*)elem1);
     return d;
}
struct student
    {
           long int ID;
           long int c;
           long int m;
    };
int main()
{
    long int n,i,j,k;
    int b[100000];
    int e[3];
    scanf("%d",&n);
   struct student a[100000];
   for(i=0;i<n;i++)
   {
                   scanf("%d %d %d",&a[i].ID,&a[i].c,&a[i].m);
   }
   for(i=0;i<n;i++)
   {
                   b[i]=a[i].c+a[i].m;
   }
   qsort(b,n,sizeof(long int),pfCompare); 
   for(i=0;i<n;i++)
   {
                   if(b[0]==a[i].c+a[i].m)
                   {
                                          e[0]=a[i].ID;
                                           j=i;
                                           break;
                   }
  }
  for(i=0;i<n;i++)
   {
                   if((b[1]==a[i].c+a[i].m)&&i!=j)
                   {
                                                  e[1]=a[i].ID;
                                                     k=i;
                                                    break;
                   }
  }
  for(i=0;i<n;i++)
   {
                   if((b[2]==a[i].c+a[i].m)&&i!=j&&i!=k)
                   {
                                                        e[2]=a[i].ID;
                                                         break;
                   }
  }
   for(i=0;i<=2;i++)
   {
                    printf("%d %d\n",e[i],b[i]);
   }
   getchar();
   getchar();
   getchar();
}