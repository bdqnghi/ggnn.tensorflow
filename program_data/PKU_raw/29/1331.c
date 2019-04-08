int main()
{
int m,i,H[100],j;
double SZ[100],s[100],z[100],x[100];
scanf("%d",&m);
for(i=2;i<100;i++)
  {z[0]=2;x[0]=1;
   z[1]=3;x[1]=2;
   z[i]=z[i-1]+z[i-2];x[i]=x[i-1]+x[i-2];}
 
   
for(i=0;i<m;i++)
 {scanf("%d",&H[i]);}
for(j=0;j<m;j++){s[0]=0;
for(i=0;i<H[j];i++){ SZ[i]=1.00000*z[i]/x[i];
   s[j]+=SZ[i];}
    printf("%.3lf\n",s[j]);s[j+1]=0;
}
 return 0;
}   
