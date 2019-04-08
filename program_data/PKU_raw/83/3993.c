int main()
{
   int i,num;
   double sz[10],sz1[10],sz2[10],sum, result,GPA;
   scanf("%d", &num);
   for(i=0;i<num;i++)
   {
                     scanf("%lf", &sz[i]);
                     }
   for(i=0;i<num;i++)
   {
                     scanf("%lf", &sz1[i]);
                     }
   for(i=0;i<num;i++)
   {
                     if(sz1[i]>=90)
                     {
                                   sz2[i]=4.0;
                     }
                     else if(sz1[i]>=85)
                     {
                                   sz2[i]=3.7;
                     }
                     else if(sz1[i]>=82)
                     {
                                   sz2[i]=3.3;
                     }
                     else if(sz1[i]>=78)
                     {
                                   sz2[i]=3.0;
                     }
                     else if(sz1[i]>=75)
                     {
                                   sz2[i]=2.7;
                     }
                     else if(sz1[i]>=72)
                     {
                                   sz2[i]=2.3;
                     }
                     else if(sz1[i]>=68)
                     {
                                   sz2[i]=2.0;
                     }
                     else if(sz1[i]>=64)
                     {
                                   sz2[i]=1.5;
                     }
                     else if(sz1[i]>=60)
                     {
                                   sz2[i]=1.0;
                     }
                    else
                     {
                                   sz2[i]=0;
                     }
                     }
   result=0;
   sum=0;
   //for(i=0;i<num;i++)
   //printf("%.2lf %.2lf\n", sz1[i], sz2[i]);
   for(i=0;i<num;i++)
   {
                     result=result+sz2[i]*sz[i];
                     sum=sum+sz[i];
                     }
   //printf("%.2lf %.2lf", result, sum);
  GPA=result/sum;
   printf("%.2lf", GPA);
   scanf(" ");
   return 0;
}