double num[46][8];
struct node 
{
 int a,b,c;
 int  arr[11];
};
 struct node arr[11];
int main()
{ 
	int i,n,j,m;
    struct node  arr[11];
 while(scanf("%d",&n)!=EOF)
 {
  memset(num,0,sizeof(num));
  memset(arr,0,sizeof(arr));
  for(i=0;i<n;i++)
   scanf("%d %d %d",&arr[i].a,&arr[i].b,&arr[i].c);
  int h=0,k=0;
  for(i=0;i<n-1;i++)
   for(j=i+1;j<n;j++)
   {
    double aa,bb,cc,dd;
    aa=pow((double) (arr[i].a-arr[j].a),(int) 2);
    bb=pow((double) (arr[i].b-arr[j].b),(int) 2);
    cc=pow((double) (arr[i].c-arr[j].c),(int) 2);
	dd= sqrt((double)(aa+bb+cc));
    num[h][0]=arr[i].a;
    num[h][1]=arr[i].b;
    num[h][2]=arr[i].c;
    num[h][3]=arr[j].a;
    num[h][4]=arr[j].b;
    num[h][5]=arr[j].c;
    num[h][6]=dd;
    num[h][7]=k;
    k++;
    h++;
   }
    for(i=0;i<h-1;i++)
    for(j=i+1;j<h;j++)
     if(num[i][6]<=num[j][6])
     {
      double d1=0;
      for(m=0;m<=6;m++)
      {
       d1=num[i][m];
       num[i][m]=num[j][m];
       num[j][m]=d1;
      }
	 }
     for(i=0;i<h-1;i++)
      for(j=i+1;j<h;j++)
       if(num[i][6]==num[j][6])
       {
        if(num[i][7]<num[j][7])
        {
         double d1=0;
         for(m=0;m<=7;m++)
         {

          d1=num[i][m];
          num[i][m]=num[j][m];
          num[j][m]=d1;
         }
        }
	   }
       for(i=0;i<h;i++)
        printf("(%.f,%.f,%.f)-(%.f,%.f,%.f)=%.2f\n",num[i][0],num[i][1],num[i][2],num[i][3],
        num[i][4],num[i][5],num[i][6]);
}
 return 0;
}