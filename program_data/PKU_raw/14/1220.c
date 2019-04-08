
struct Student
{
    int num;
    int Chi;
    int Math;
    int sum;
};
struct Student stud[100000],temp;
int main()
{
   int n,i,j;
   cin>>n;
   for(i=0;i<n;i++)
   {
       cin>>stud[i].num>>stud[i].Chi>>stud[i].Math;
       stud[i].sum=stud[i].Chi+stud[i].Math;
   }
   if(n==2)
   {
       if(stud[0].sum<stud[1].sum)
       {
               temp=stud[0];
               stud[0]=stud[1];
               stud[1]=temp;
           }
   }
   else
   {
       for(i=0;i<3;i++)
   {
       for(j=n-1;j>i;j--)
       {
           if(stud[j].sum>stud[j-1].sum)
           {
               temp=stud[j];
               stud[j]=stud[j-1];
               stud[j-1]=temp;
           }
       }
   }
   }
   
   if(n==2)
   {
      
     
       cout<<stud[0].num<<' '<<stud[0].sum<<endl;
     
       cout<<stud[1].num<<' '<<stud[1].sum;
   }
   for(i=0;i<2;i++)
   {
       cout<<stud[i].num<<' '<<stud[i].sum<<endl;
   }
   cout<<stud[2].num<<' '<<stud[2].sum;
    return 0;
}
