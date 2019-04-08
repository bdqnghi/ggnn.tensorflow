int*p;
int n;
int max(int t,int k)
{
    if(t>k) return t;
    else return k;
    }
int pd(int i,int h)
{   if(i==n)   return 0;
    if(p[i]>h) return pd(i+1,h);
    if(p[i]==h) return pd(i+1,h)+1;
   return max(pd(i+1,p[i])+1,pd(i+1,h));
    }
int main()
{
    int i,j,k;
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&p[i]);
    k=pd(0,800000);
    printf("%d",k);
    free(p); 
}
