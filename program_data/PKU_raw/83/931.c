int main()
{
   int n,i,x;
   float a[100],jd,sumx,sumj;
   int b[20];
   for (i=0;i<=59;i++) a[i]=0;
   for (i=60;i<=63;i++) a[i]=1;    
   for (i=64;i<=67;i++) a[i]=1.5;
   for (i=68;i<=71;i++) a[i]=2;
   for (i=72;i<=74;i++) a[i]=2.3;
   for (i=75;i<=77;i++) a[i]=2.7;
   for (i=78;i<=81;i++) a[i]=3;
   for (i=82;i<=84;i++) a[i]=3.3;
   for (i=85;i<=89;i++) a[i]=3.7;
   for (i=90;i<=100;i++) a[i]=4;
   scanf("%d",&n);
   sumx=0;sumj=0;
   for (i=0;i<n;i++) 
     {scanf("%d",&b[i]);
      sumx=sumx+b[i];               
                     
     }
   for (i=0;i<n;i++)
   {scanf("%d",&x);
    sumj=sumj+a[x]*b[i];   
       
   } 
   
   jd=sumj/sumx;
   printf("%.2f",jd);
   return 0; 
    
    
}
