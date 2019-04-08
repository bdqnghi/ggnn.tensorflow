int n1,n2;
int*p1;
int*p2;
int*p3;
main()
{
     scanf("%d %d",&n1,&n2);
     p1=(int*)malloc(n1*sizeof(int));
     p2=(int*)malloc(n2*sizeof(int));
     for(int k=0;k<n1;k++)
     scanf("%d",&p1[k]);
     for(int k=0;k<n2;k++)
     scanf("%d",&p2[k]);
     for(int k=n1-1;k>0;k--)
    {
            for(int i=0;i<k;i++)
            {
                    if(p1[i]>p1[i+1])
                    {
                                   int t;
                                   t=p1[i];
                                   p1[i]=p1[i+1];
                                   p1[i+1]=t;
                    }
            }
    }
    
    for(int k=n2-1;k>0;k--)
    {
            for(int i=0;i<k;i++)
            {
                    if(p2[i]>p2[i+1])
                    {
                                   int t;
                                   t=p2[i];
                                   p2[i]=p2[i+1];
                                   p2[i+1]=t;
                    }
            }
    } 
    p3=(int*)malloc((n1+n2)*sizeof(int));
    for(int k=0;k<n1;k++)
    p3[k]=p1[k];
    for(int i=n1;i<n1+n2;i++)
    p3[i]=p2[i-n1];   
    int c;
     for(c=0;c<n1+n2;c++)
     {
                           if(c==0)
                           printf("%d",p3[0]);
                           else printf(" %d",p3[c]);
     }
     
}
