int main ()
{    int p(int i);
     int q(int i);
    int m,n,i,t,s;
    t=0;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {  if(p(i)==0 && q(i)==0) t++;
     }
     s=0;
     for(i=m;i<=n;i++)
    {  if(p(i)==0 && q(i)==0) {
           printf("%d",i);
            s++;
         if(s!=t) printf(","); 
             }
     }
    if(t==0) printf("no");

   return 0;
}

int p(int i)
{   int j;
    for(j=2;j<i;j++)
      {  if(i%j==0) return 1;
       }
    if (j==i) return 0;
}


int q(int i)
{  int j,t,n,s;
   s=i;
   n=i%10;
   t=10;
    while (0==0)   
   {  if(i/t==0) break;
      s=s/10;
      n=n*10+s%10;
      t=t*10;
    }
   if (n==i) return 0;
   else return 1;
}


