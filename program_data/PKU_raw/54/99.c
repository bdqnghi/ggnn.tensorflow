int undi(int n,int k,int p)
{int z=p,m=n;
  while(m>1)
  {if((z*n+k)%(n-1)==0)
    {m--;
     z=(z*n+k)/(n-1);}
   else break;}
   if(m>1) z=0;
   else z=z*n+k;
   return(z);
 }

void main()
{int n,k,p,s;
 scanf("%d %d",&n,&k);
 for(p=1;;p++)
  if(undi(n,k,p)!=0)
    break;
 s=undi(n,k,p);
 printf("%d",s);
}