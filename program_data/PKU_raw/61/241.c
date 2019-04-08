int main()
{   int f(int x);

    int a[10];
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d",&a[i]);
     printf("%d\n",f(a[i]));
    }
return 0;
}
     int f(int x)

{  
     int f1=1,f2=1,f3,b,i;
     if(x==1||x==2) return(1);
     else 
     {for(i=2;i<x;i++)
     {f3=f1+f2;f1=f2;f2=f3;}
     b=f3;
     return(b);}}
         
  
     
   