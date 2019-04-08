int prime(int x)
{   int b=1;
    if(x==3||x==5||x==7)
    {return b;}
    else
    {
        for(int i=3;i<=sqrt(x);i+=2)
        { 
            if(x%i==0)
            {     
                  b=0;
                  return b;
                  break;
            }
        }
    }
    return b;
}
int main()
{   
    int o;
    int n,a;
    scanf("%d",&n);
    for(int i=6;i<=n;i+=2)
    {       int s=i/2;
            for(a=3;a<(n/2);a+=2)
            { 
                            
                            if(prime(a)+prime(i-a)==2)
                            {
                                         printf("%d=%d+%d\n",i,a,i-a);break;
                                         
                            }  
                                 
            }     
    }
                            
    
     scanf("%d",&o);
    return 0;
}
    
    