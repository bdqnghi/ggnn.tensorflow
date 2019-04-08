int main()
{
    int n,k,j;
    double num[100][100]={0},a,b,c,x1,x2,i;
    scanf("%d",&n);
    i=sqrt(-1);
    for(k=0;k<=n-1;k++)
    {
     scanf("%lf %lf %lf",&num[k][0],&num[k][1],&num[k][2]);
     a=num[k][0];
     b=num[k][1];
     c=num[k][2];
     if((b*b-4*a*c)>=0)
     {
      num[k][3]= (-b + sqrt(b*b-4*a*c))/(2*a);
      num[k][4]= (-b - sqrt(b*b-4*a*c))/(2*a);
      }
     else 
     {
      if(b==0.00000)
      {num[k][3]=0.00000;}
      else
      {
      num[k][3]= (-b)/(2*a);
       }
      num[k][4]=sqrt(4*a*c-b*b)/(2*a);
      num[k][5]=sqrt( 4*a*c-b*b)/(2*a);  
          }
     //printf("\n");//
     }
    for(j=0;j<=n-1;j++)
     {
     k=j;
     if(num[k][1]*num[k][1]-4*num[k][0]*num[k][2]>=0)
       {
        if(num[k][3]!=num[k][4])
        {printf("x1=%.5lf;x2=%.5lf\n",num[k][3],num[k][4]);}
        else {printf("x1=x2=%.5lf\n",num[k][3]);}
       }
     else {printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",num[k][3],num[k][4],num[k][3],num[k][5]);}
     }
     getchar();
     getchar();
     return 0;
}