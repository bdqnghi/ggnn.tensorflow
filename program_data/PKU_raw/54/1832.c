int main()
{
 int a[100],n,k,i,j,m,t,q;
 scanf("%d%d",&n,&k);
 for(i=1;;i++)
  { 
    a[0]=i;
    a[0]=n*a[0]+k;
    t=0;
    for(j=1;j<n;j++)
     {
        if(a[j-1]%(n-1)!=0) {t++;
                             break;}
        a[j]=a[j-1]*n/(n-1) +k;
       
      }
    if(t==1) continue;
    if(t==0) break;
   }
 printf("%d",a[n-1]);

 return 0;
}