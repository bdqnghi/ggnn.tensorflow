struct student
{
       char num[10];
       int yuwen;
       int shuxue;
       int sum;
};
int main()
{
    int n,i;
    scanf("%d",&n);
    struct student a[100000];
    struct student s[3];
        struct student k;
    for(i=0;i<n;i++)
    {
                    scanf("%s %d %d",a[i].num,&a[i].yuwen,&a[i].shuxue);
                    a[i].sum=a[i].yuwen+a[i].shuxue;
    }
    s[0]=a[0];
    s[1]=a[0];
    s[1].sum=0;
    s[2]=a[0];
    s[2].sum=0;
    for(i=1;i<n;i++)
    { 
              if(a[i].sum>s[2].sum&&a[i].sum<=s[1].sum){s[2]=a[i];}
              if(a[i].sum>s[1].sum&&a[i].sum<=s[0].sum){s[2]=s[1];s[1]=a[i];}
              if(a[i].sum>s[0].sum)  {s[2]=s[1];s[1]=s[0];s[0]=a[i];}
              
                     
    }    
    for(i=0;i<3;i++)
    {
           printf("%s %d\n",s[i].num,s[i].sum);         
    }
    getchar();getchar();
} 
