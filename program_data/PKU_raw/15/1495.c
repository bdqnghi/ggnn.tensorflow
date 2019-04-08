int main()
{
    int n;
    scanf("%d",&n);
    int sz[1000][1000];
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)  
       {
            scanf("%d",&sz[i][j]);   
       }   
    }
    
    int js=0;
    
    for(int m=0;m<n;m++)
    {
       for(int p=0;p<n;p++)  
       {
            if(sz[m][p]==0&&sz[m][p+1]==0)
            {
                                          js+=1;
                                          }
       }   
    }
    
    int a;
    a=(js-2)/2;
    
    
    int js2=0;
    
    for(int e=0;e<n;e++)
    {
       for(int r=0;r<n;r++)  
       {
            if(sz[r][e]==0&&sz[r+1][e]==0)
            {
                                          js2+=1;
                                          }
       }   
    }
    
    int b;
    b=(js2-2)/2;
    
    int s;
    s=a*b;
    
    printf("%d",s);
    
	return 0;
}