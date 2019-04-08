struct num1
{
    int a;
    int b;
    int c;
} num1[100];
struct num
{
    int x1;
    int x2;
    int x3;
    int x11;
    int x12;
    int x13;
    int l1;
    int l2;
    float sum;
}num[5010],k;
int main()
{  int t = 0,n,i,j,sum;
   scanf("%d",&n);
   for( i = 1; i <= n ;i ++)
   scanf("%d %d %d",&num1[i].a,&num1[i].b,&num1[i].c);
   for( i = 1; i <= n;i ++)
  {   
      for( j = i+1; j <= n ;j++  )
   {
      num[t].x1 = num1[i].a;
      num[t].x2 = num1[i].b;
      num[t].x3 = num1[i].c;
      num[t].x11 = num1[j].a;
      num[t].x12 = num1[j].b;
      num[t].x13 = num1[j].c;
      num[t].sum = (num[t].x1-num[t].x11)*(num[t].x1-num[t].x11)+(num[t].x2-num[t].x12)*(num[t].x2-num[t].x12)+(num[t].x3-num[t].x13)*(num[t].x3-num[t].x13);
      num[t].l1 = i;
      num[t].l2 = j;
      t ++ ;
   }
   } 
    for( i = 0;i <t ;i++ )
     {for ( j = i ;j <t;j++ )
         {  if(num[i].sum<num[j].sum)
           { k = num[i];
             num[i] = num[j];
             num[j] = k;  
           }
         }
     }
     for( i = 0;i <t ;i++ )
     {for ( j = i ;j <t;j++ )
         {  if((num[i].sum==num[j].sum)&&((num[i].l1>num[j].l1)||((num[i].l1==num[j].l1)&&(num[i].l2>num[j].l2))))
           { k = num[i];
             num[i] = num[j];
             num[j] = k;  
           }
         }
     }
      for( i = 0 ;i < t ;i++ )
     { printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",num[i].x1,num[i].x2,num[i].x3,num[i].x11,num[i].x12,num[i].x13,sqrt(num[i].sum));}

}
