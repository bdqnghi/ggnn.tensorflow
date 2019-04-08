void main()
{int n,k,m,i,p,s;
 scanf("%d %d",&n,&k);
 m=n;
 p=0;
 while(p==0)
  {p=1;
   i=1;
   s=m;
   while(i<=n&&p==1)
    {if((s-k)%n==0&&(s-k)!=0)
     {p=1;
      s=s-(s-k)/n-k;
      i=i+1;
     }
     else p=0;
    }
   if(p==0) m=m+1;
  }
 printf("%d",m);
}