int main()
{
    int n,i,fenjie(int x,int y),*a,re=0,j;//x?????????y???????????
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
                    scanf("%d",&a[i]);
                    
    }
    for(i=0;i<n;i++)
    {
                   printf("%d\n",fenjie(a[i],2)+1);
    }
    return 0;
}

fenjie(int x,int y)
{
           int i,flag=0,re=0,flag2=0,k=0;
           if(x<y) return 0;
           else if(x==y) return 0;
           else
           {
                for(i=y;i<x;i++)
                {
                                 if(x%i==0) flag2+=1;
                }
                if(flag2==0) return 0;    
                else
           {
                   for(i=y;i<=x;i++)
                   {
                                    if(x%i==0) 
                                    {
                                               re+=fenjie(x/i,i);
                                               if(x/i>=i) k+=1;
                                    }
                   }
                   re+=k;
                   return(re);
           } 
           }
}