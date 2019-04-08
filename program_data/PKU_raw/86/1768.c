int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    int sum[n];
    int sz[n][1000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]!=0)
        {
        	for(int j=0;j<num[i];j++)
        	{
            	scanf("%d",&sz[i][j]);
            }
            if(sz[i][num[i]-1]+3*num[i]<=60)
            {
                sum[i]=60-3*num[i];
            }
            else if(sz[i][num[i]-1]+3*(num[i]-1)<=60)
            {
                sum[i]=sz[i][num[i]-1];
            }
            else if(sz[i][num[i]-2]+3*(num[i]-1)<=60)
            {
                sum[i]=60-3*(num[i]-1);
            }
            else if(sz[i][num[i]-2]+3*(num[i]-2)<=60)
            {
                sum[i]=sz[i][num[i]-2];
                        
            }
            else if(sz[i][num[i]-3]+3*(num[i]-2)<=60)
            {
                sum[i]=60-3*(num[i]-2);
            }
            else if(sz[i][num[i]-3]+3*(num[i]-3)<=60)
            {
                sum[i]=sz[i][num[i]-3];
                        
            }
        }
        else sum[i]=60;
        printf("%d\n",sum[i]);
    }
}