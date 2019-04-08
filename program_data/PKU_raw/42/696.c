int main()
{
    int n;
    scanf("%d",&n);
    int* p;
    
    p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&p[i]);    
            
            }
    
    int del;
    scanf("%d",&del);
    int c=0;
    for(int i=0;i<=n-1;i++)
    {
            if(p[i]!=del) {c++;
                         if(c==1)   printf("%d",p[i]);
                         else printf(" %d",p[i]);
                         }
            
            
     }
    
    
    
    
    
    
    
    
    
    
    
}
