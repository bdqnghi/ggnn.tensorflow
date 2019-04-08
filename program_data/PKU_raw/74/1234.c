main()
{
     int m,n,i,t=0,de,p,res;
      int f(int x);
      scanf("%d %d",&m,&n);
      for(i=m;i<=n;i++)
      {
 
            res=0;
            p=i;
            while(p)
            {
                    de=p%10;
                    res=res*10+de;
                    p/=10;
            }
            if(res==i)
           if(f(i))     
           { if(t==0)
            {printf("%d",i);t++;}
            else
            {printf(",%d",i);t++;}}

            
      }
      if(t==0)printf("no\n");
      getchar();
      getchar();
}

int f(int x) 
{ 
int i; 
if (x == 1 || x == 2 || x == 3 || x == 5) 
return 1; 
else if (x % 2) 
{ 
for (i = 3; i <= x / 2 + 1; i += 2) 
{ 
if (x % i == 0) return 0; 
} 
return 1; 
} 
else 
{ 
return 0; 
} 
}
