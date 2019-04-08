int main()
{
    int n,i,p,q,c,d;
    int a[100000];
    scanf("%d",&n);
    struct student
    { int num;
      int score1;
      int score2;
    }stu[100000];
    for(i=0;i<n;i++)
    {
                    scanf("%d %d %d",&stu[i].num,&stu[i].score1,&stu[i].score2);
    }
    for(i=0;i<n;i++)
    {
                    a[i]=stu[i].score1+stu[i].score2;
    }
    int max1,max2,max3;
    int num1,num2,num3;
    if(a[0]>=a[1])
    {
                 max1= a[0];
                 num1=0;
                 if(a[0]<a[2])
                 {
                              max1=a[2];
                              num1=2;
                              max2=a[0];
                              num2=0;
                              max3=a[1];
                              num3=1;
                 }
                 else
                 {
                     if(a[1]>=a[2])
                     {
                                  max2=a[1];
                                  num2=1;
                                  max3=a[2];
                                  num3=2;
                     }
                     else
                     {
                                  max2=a[2];
                                  num2=2;
                                  max3=a[1];
                                  num3=1;
                     }
                 }
    }
    else
    {
                 max1= a[1];
                 num1=1;
                 if(a[1]<a[2])
                 {
                              max1=a[2];
                              num1=2;
                              max2=a[1];
                              num2=1;
                              max3=a[0];
                              num3=0;
                 }
                 else
                 {
                     if(a[0]>=a[2])
                     {
                                  max2=a[0];
                                  num2=0;
                                  max3=a[2];
                                  num3=2;
                     }
                     else
                     {
                                  max2=a[2];
                                  num2=2;
                                  max3=a[0];
                                  num3=0;
                     }
                 }
    }
    for(i=3;i<n;i++)
    {
                if(a[i]>max1)
                {
                                  p=max1;q=max2;c=num1;d=num2; 
                                  max1=a[i];max2=p;max3=q;
                                  num1=i;num2=c;num3=d;
                }
                else
                {if(a[i]>max2&&a[i]<=max1)
                     {
                                 p=max2;c=num2;
                                 max2=a[i];max3=p;
                                 num2=i;num3=c;
                     }
                else
                {
                    if(a[i]>max3&&a[i]<=max2)
                    {
                                 max3=a[i];num3=i;
                    }
                }
                }

    }
    printf("%d %d\n%d %d\n%d %d\n",num1+1,a[num1],num2+1,a[num2],num3+1,a[num3]);
    getchar();
    getchar();
    getchar();               
 
}