main()
{int i,j,k=0,m,n,a,b,c=0,w;
 scanf("%d",&w);
 int tian[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 int jg[12];
 for(i=0;i<12;i++)
  {c=c+tian[i];
   m=(c+12)%7;
   if((w+m)<=7)
      n=w+m;
   else  {n=m-(7-w);}  
  if(n==5)
  {jg[k]=i+1;k++;}
  }
 for(j=0;j<k;j++)
   printf("%d\n",jg[j]);
 
 
}