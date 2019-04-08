int main()
{
    int n,i,j,p,q,sus,num;
    num=0;
    scanf("%d",&n);
    int *k=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    k[i]=i;
    scanf("%d %d",&p,&q);
    while(p!=0||q!=0)
    {
                    k[p]=-1;
                    scanf("%d %d",&p,&q);
    }
    for(i=0;i<n;i++)
    {
        if(k[i]!=-1)
        {
         sus=k[i];
         break;
        }
        else
        num=num+1;
    }
    if(num==n)
    printf("NOT FOUND");
    else
    printf("%d",sus);
    getchar();    
    getchar();
}                               
                                    
                    
    
    
    
    
    
   
 
