struct student
{
  int ID;
  int chi;
  int math;     
}student[100000];
int main()
{
   int n,i,j,k;
   scanf("%d",&n);
      int a[n];
   for(i=0;i<n;i++)
     {
     scanf("%d %d %d",&student[i].ID,&student[i].chi,&student[i].math);      
      a[i]=student[i].chi+student[i].math;
      }

  for(k=0;k<3;k++)
  {
   for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
          if(a[i]<a[j])
             break;          
       } 
       if(j==n&&a[i]>=a[j-1]) 
         {
           printf("%d %d\n",student[i].ID,a[i]);
           a[i]=0;
           break;
         }      
    }  
  } 
   getchar();
   getchar();   
}
