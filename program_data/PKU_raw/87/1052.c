int main()
{
 int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],h[1000],i,m;
 for(i=0;i<1000;i++){
 scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
 h[i]=(12+d[i]-a[i])*60*60+(e[i]-b[i])*60+f[i]-c[i];
 if(a[i]+b[i]+c[i]+d[i]+e[i]+f[i]==0){break;}
                      }
 for(m=0;m<i;m++){
 printf("%d\n",h[m]);}
 return 0;
    }
