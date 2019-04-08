int main()
{float a[101]={0},gpa,sumjidian=0,sumxuefen=0;
 int i,n,b[101],c[101];
 for (i=60;i<=63;i++) a[i]=1.0;
 for (i=64;i<=67;i++) a[i]=1.5;
 for (i=68;i<=71;i++) a[i]=2.0;
 for (i=72;i<=74;i++) a[i]=2.3;
 for (i=75;i<=77;i++) a[i]=2.7;
 for (i=78;i<=81;i++) a[i]=3.0;
 for (i=82;i<=84;i++) a[i]=3.3;
 for (i=85;i<=89;i++) a[i]=3.7; 
 for (i=90;i<=100;i++) a[i]=4.0;  
 scanf("%d",&n);
 for (i=0;i<n;i++)  {scanf("%d",&b[i]);sumxuefen=sumxuefen+b[i];}
 for (i=0;i<n;i++)  
   {scanf("%d",&c[i]);
    sumjidian=sumjidian+a[c[i]]*b[i];                  
   }  
 gpa=sumjidian/sumxuefen;
 printf("%.2f",gpa);
 scanf("\n");
    
    
    
    
} 
