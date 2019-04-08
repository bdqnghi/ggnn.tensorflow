int prime(int k)
{ int i,n;
  n=sqrt(k);
  for(i=2;i<=n;i++)
	  if(k%i==0) break;
  if(i>n) return(1);
  else return(0);
  
}

int same(int k)
{ int m=0,n;
  n=k;
  while(n>0)
  { m=m*10+n%10;
    n=n/10;}
   
  if(m==k) return(1);
  else return(0);

}

void main()
{ int n,m,i,t=0;
  scanf("%d%d",&m,&n);
  for(i=m;i<=n;i++)
    if(prime(i)&&same(i)) 
   { if(t>0) printf(",");
	 printf("%d",i);
	 t++;
   }
 if(t==0) printf("no");

}