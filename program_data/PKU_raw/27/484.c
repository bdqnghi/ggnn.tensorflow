main()
{int n,m;
double p,q,t,x1,x2;
float b[1005],a[1005];

scanf("%d",&n);

for (m=0;m<3*n;m=m+3)
   {
   scanf("%f %f %f",&b[m],&b[m+1],&b[m+2]);
   a[m]=b[m];
   a[m+1]=b[m+1];
   a[m+2]=b[m+2];
   }
for(m=0;m<=3*n-1;m=m+3)
   {
   t=a[m+1]*a[m+1]-4*a[m]*a[m+2];
if (t>=0)
       
if(t==0)
   {
       p=-1*a[m+1]/(2*a[m]);
       if(p==-0.0) p=0.0;
       printf("x1=x2=%.5lf\n",p);
   } 
else {p=-1*a[m+1]/(2*a[m]);
       q=sqrt(t)/(2*a[m]);
       x1=p+q;
       x2=p-q;
       if(x1==-0.0) x1=0.0;
       if(x2==-0.0) x2=0.0;
       printf("x1=%.5lf;x2=%.5lf\n",x1,x2);
   }
else
   {
       p=-1*a[m+1]/(2*a[m]);
       q=sqrt(-t)/(2*a[m]);
        if(p==-0.0) p=0.0;
        if(q==-0.0) q=0.0;
       printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi\n",p,q,p,q);
   } 
   }      
       
   }
