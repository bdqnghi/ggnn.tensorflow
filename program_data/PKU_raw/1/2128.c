
int ispr(int t) 
{
    int v=(int)sqrt(t*1.0)+1;
    for(int i=2; i<v; i++)
        if(t%i==0)
            return 0;
    return 1;
}


int sum;
void fun(int n,int i) 
{
    if(n==1)
        sum++;
    for (; i<=n; i++)
    {
        if(n%i==0)
            fun(n/i,i);
    }
    return ;
}


int main() {
    int n;
    scanf("%d",&n);
    for (int j=0; j<n; j++)
    {
        int a;
        scanf("%d",&a);
        if(ispr(a)==1) 
        {
            printf("1\n");
            continue;
        }
        
        int res=1;
        for (int i=2; i<=a/2; i++)
        {
            if(a%i==0)
            {
                sum=0;
                fun(a/i,i);
                res=res+sum;
            }
            
        }
        printf("%d\n",res);
    }
    
    return 0;
}
