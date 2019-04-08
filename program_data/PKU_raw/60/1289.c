
int main()
{int n,i,k;
 double m,p;
scanf("%d",&n);
if(n>=5)
{for (k=3;k<=n-2;k++)
  {m=sqrt(k);
   for(i=2;i<=m;i++)
     if(k%i==0)break;
   if(i<=m)continue;
   p=sqrt(k+2);
   for(i=2;i<=p;i++)
      if((k+2)%i==0)break;
   if(i<=p) continue;
   else printf("%d %d\n",k,(k+2));
   }
   }
   else printf("empty");

  return 0;
}