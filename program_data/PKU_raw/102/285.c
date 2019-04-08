int main()
{
  int i,j,m,n,a,b=0,c=0;
  double e,x[40],y[40],z[40];
  char k[40][10]; scanf("%d",&n);
  for(i=0;i<n;i++)
  {scanf("%s%lf",k[i],&z[i]);
   } 
   for(i=0;i<n;i++)
   {if(k[i][0]=='m') {x[c]=z[i]; c++;}
    else {y[b]=z[i]; b++;}
     }
  for(i=0;i<c+1;i++) 
  { for(j=1;j<c+1-i;j++)
    { if(x[j]<x[j-1]) {e=x[j]; x[j]=x[j-1]; x[j-1]=e;}
     }
   }
    for(i=0;i<b+1;i++) 
  { for(j=1;j<b+1-i;j++)
    { if(y[j]>y[j-1]) {e=y[j]; y[j]=y[j-1]; y[j-1]=e;}
     }
   } printf("%.2lf",x[1]);
  for(i=2;i<=c;i++) printf(" %.2lf",x[i]);
  for(i=0;i<b;i++) printf(" %.2lf",y[i]);
   return 0;
}