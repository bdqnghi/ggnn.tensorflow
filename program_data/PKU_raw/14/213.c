
int main()
{
    int n,i,j,t,First=0,FirstNum,Second=0,SecondNum,Third=0,ThirdNum;
    scanf("%d",&n);
    struct Student
    {
       int Chinese;
       int Math;
       int Sum;
       int Num;
    }Student[n+1];
    for (i=1;i<=n;i++)
      {
         scanf("%d %d %d",&Student[i].Num,&Student[i].Chinese,&Student[i].Math);
         Student[i].Sum=Student[i].Chinese+Student[i].Math;
      }
    for (i=1;i<=n;i++)
      {
        if (Student[i].Sum>First)
         {
             First=Student[i].Sum;
             FirstNum=i;
         }
      }
    for (i=1;i<=n;i++)
      {
        if (Student[i].Sum>Second&&Student[i].Sum<=First&&i!=FirstNum)
         {
             Second=Student[i].Sum;
             SecondNum=i;
         }
      }
    for (i=1;i<=n;i++)
      {
        if (Student[i].Sum>Third&&Student[i].Sum<=Second&&i!=SecondNum&&i!=FirstNum)
         {
             Third=Student[i].Sum;
             ThirdNum=i;
         }
      }
    printf("%d %d\n",FirstNum,First);
    printf("%d %d\n",SecondNum,Second);
    printf("%d %d\n",ThirdNum,Third);
    
}
    
    
    
    
    
    
    
    
    
    
    
