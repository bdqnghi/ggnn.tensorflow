void main()
{int i,n,m,k,j,a[100];
 scanf("%d%d",&n,&k);
 for(i=0;i<100;i++)
   a[i]=0;
 for(j=1;;j++)
{ a[n]=j;
  for(i=n-1;i>0;i--)
  {if((a[i+1]*n+k)%(n-1)==0)
      a[i]=(a[i+1]*n+k)/(n-1);
   else break;
   }
  if(a[1]!=0)
    break;
 }
 m=a[1]*n+k;
 printf("%d",m);
}
 
 