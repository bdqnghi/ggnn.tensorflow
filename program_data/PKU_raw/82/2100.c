int main()
{
    int n,a=0,b=0,c;
    scanf("%d",&n);
    int num[n][2],dnum[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i][0]);
        scanf("%d",&num[i][1]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(num[i][0]<=140&&num[i][0]>=90&&num[i][1]>=60&&num[i][1]<=90)
        {
            a++;
        }
        else
        {
            
            dnum[b]=a;
            b++;
            a=0;
        }
        
    }
   dnum[b]=a;

    for(int i=0;i<b;i++)
    {
        for(int j=1;j<b+1-i;j++)
        {
            if(dnum[j-1]>dnum[j])
            {
                c=dnum[j-1];
                dnum[j-1]=dnum[j];
                dnum[j]=c;
            }
        }
    }
    
         printf("%d",dnum[b]);
    return 0;
}
