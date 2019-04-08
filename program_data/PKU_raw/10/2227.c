int m,sum,maxim,t,bo[25]={0};

int meishu(int n,int a[])
{ int j;
  if(n==m-1)return sum;
  else
   { for(j=n+1;j<m;j++)
      if(a[n]>=a[j])
       { bo[j]=1;
         sum++;
         t=meishu(j,a);
         if(maxim<t)maxim=t;
         sum--;
       }
     if(j==m&&sum!=1)return sum;
     else if(sum==1) return maxim;
   }
}

main()
{
 int i,a[25],maxi=0;
 scanf("%d",&m);
 for(i=0;i<m;i++)
    scanf("%d",&a[i]);
 for(i=0;i<m;i++)
    if(bo[i]==0)
     { sum=1;
       maxim=1;
       if(maxi<meishu(i,a))
         maxi=meishu(i,a);
     }
 printf("%d",maxi);
 return 0;
}
