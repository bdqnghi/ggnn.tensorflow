
int f(int a,int min)
{ 
if(a < min)
{ 
return 0; 
} 
int result = 1; 
for(int i = min;i<a;i++)
{ 
if(a % i == 0)
{ 
result += f(a/i,i); 
} 
} 
return result; 
} 

main()
{
      int n;
      scanf("%d",&n);
      int i;
      int a;
      int b;
      for(i=0;i<n;i++)
      {
            scanf("%d",&a);
            int min=2;
            b=f(a,2);
            printf("%d",b);
            printf("\n");         
      }
      }
