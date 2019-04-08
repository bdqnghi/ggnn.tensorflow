int main()
{
  struct student
  {
         int ID;
         int yuwen;
         int shuxue;
  };
  int n,i,x,y,z,o,p,q;
  scanf("%d",&n);
  int a[100000];
  struct student stu[100000];
  for(i=0;i<n;i++)
  {
   scanf("%d %d %d",&stu[i].ID,&stu[i].yuwen,&stu[i].shuxue);
   a[i]=stu[i].yuwen+stu[i].shuxue;
  }
  x=0;
  y=1;
  z=2;
   for(i=0;i<3;i++)
   {
    if(a[i]>=a[0]&&a[i]>=a[1]&&a[i]>=a[2])
    {
       x=i;
       o=a[i];
       continue;
    }
    if(a[i]<=a[0]&&a[i]<=a[1]&&a[i]<=a[2])
    {
       z=i;
       q=a[i];
       continue;
    }
    y=i;
    p=a[i];
   }
  
    for(i=3;i<n;i++)
   {
     if(a[i]>q)
     {
       if(a[i]>o)
       {
        z=y;
        y=x;
        x=i;
        q=p;
        p=o;
        o=a[i];
       }
       else
       {
        if(a[i]>p)
        {
          z=y;
          y=i;
          q=p;
          p=a[i];
        }
        else
        {
          z=i;
          q=a[i];
        }
       }
     }
   }
   printf("%d %d\n",stu[x].ID,o);
    printf("%d %d\n",stu[y].ID,p);
     printf("%d %d\n",stu[z].ID,q);
 getchar();
 getchar();
}
  
   
        
          
        
   
   
  
  
  
