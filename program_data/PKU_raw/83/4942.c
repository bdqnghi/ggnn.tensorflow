int main()
{  int i,n,b[11],p,sum=0;
   float a[11],k[101],GPA=0;

   for(i=0;i<=59;i++) k[i]=0;
   for(i=60;i<=63;i++) k[i]=1.0;
   for(i=64;i<=67;i++) k[i]=1.5;
   for(i=68;i<=71;i++) k[i]=2.0;
   for(i=72;i<=74;i++) k[i]=2.3;
   for(i=75;i<=77;i++) k[i]=2.7;
   for(i=78;i<=81;i++) k[i]=3.0;
   for(i=82;i<=84;i++) k[i]=3.3;
   for(i=85;i<=89;i++) k[i]=3.7;
   for(i=90;i<=100;i++) k[i]=4.0;

  scanf("%d\n",&n);  
  for(i=1;i<=n;i++)
      scanf("%d",&b[i]);   
   scanf("\n");
   for(i=1;i<=n;i++)
   {
     scanf("%d",&p);
     a[i]=k[p];
     GPA=GPA+a[i]*b[i];
     sum=sum+b[i];
   }

  GPA=GPA/sum;
  printf("%.2f",GPA);
}
