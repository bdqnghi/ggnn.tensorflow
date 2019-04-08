struct coordinate
{
    int x;
    int y;
    int z;   
       
} point[10];

int main() 
{
    double dis[10][10]={0}, d[100]={0}, temp=0;
    int i, j, n, k1=0, k2=0, k;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>point[i].x>>point[i].y>>point[i].z;    
    }
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            dis[i][j]=sqrt((point[i].x-point[j].x)*(point[i].x-point[j].x)+(point[i].y-point[j].y)*(point[i].y-point[j].y)+(point[i].z-point[j].z)*(point[i].z-point[j].z)) ; 
			d[10*i+j]=sqrt((point[i].x-point[j].x)*(point[i].x-point[j].x)+(point[i].y-point[j].y)*(point[i].y-point[j].y)+(point[i].z-point[j].z)*(point[i].z-point[j].z)) ;      
        }     
    }
    for(i=0; i<99; i++)
    {
        for(j=99; j>i; j--)
        {
            if(d[j]>d[j-1])
            {
                temp=d[j];
                d[j]=d[j-1];
                d[j-1]=temp;           
            }      
        }      
    }
    for(i=99; i>=1; i--)
    {
		if(d[i]==d[i-1])
		{
			d[i]=0;
		}
		
	}
    for(k=0; k<99; k++)
    {
        if(d[k]!=0)
        {
			for(i=0; i<n-1; i++)
			{
				for(j=i+1; j<n; j++)
				{
					if(dis[i][j]==d[k])
					{
						
                       cout<<"("<<point[i].x<<","<<point[i].y<<","<<point[i].z<<")-("<<
                                  point[j].x<<","<<point[j].y<<","<<point[j].z<<")="<<fixed<<setprecision(2)<<dis[i][j]<<endl;
					}
					
				}
			}  
        }      
    }
    
    return 0;
}