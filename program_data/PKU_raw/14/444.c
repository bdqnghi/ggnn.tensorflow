void main()
{
   struct stu
   {int num;
   	int chi;
   	int mat;
   }stu[100000];
   int n,i,max1,max2,max3,maxn1,maxn2,maxn3;
   int sum[100000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {scanf("%d",&stu[i].num);
   	scanf("%d",&stu[i].chi);
   	scanf("%d",&stu[i].mat);
   	sum[i]=stu[i].chi+stu[i].mat;
   }
    max1=sum[0];
    maxn1=stu[0].num;
    for(i=1;i<n;i++)
    {
        if(sum[i]>max1)
        {
            max1=sum[i];
            maxn1=stu[i].num;
        }
    }
       printf("%d %d\n",maxn1,max1) ;
    max2=sum[0];
    maxn2=stu[0].num;
        for(i=1;i<n;i++)
    {
        if(sum[i]>max2&&i!=maxn1-1)
        {
            max2=sum[i];
            maxn2=stu[i].num;
        }
    }
       printf("%d %d\n",maxn2,max2) ;
    max3=sum[0];
    maxn3=stu[0].num;
        for(i=1;i<n;i++)
    {
        if(sum[i]>max3&&i!=maxn1-1&&i!=maxn2-1)
        {
            max3=sum[i];
            maxn3=stu[i].num;
        }
    }
       printf("%d %d\n",maxn3,max3) ;
}