int main()
{
    int n[100];
    int tianji[100][1000];
    int qiwang[100][1000];
    int i;
    for(i=0;;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]==0)
        {
            break;       
        }
        else
        {
            for(int j=0;j<=n[i]-1;j++)
            {
                scanf("%d",&tianji[i][j]);    
            }
            for(int k=0;k<=n[i]-1;k++)
            {
                scanf("%d",&qiwang[i][k]);    
            }
        }            
    }
    for(int l=0;l<=i-1;l++)
    {  
        for(int j=n[l]-1;j>0;j--)
        {
            for(int k=0;k<j;k++)
            {
                if(tianji[l][k]>tianji[l][k+1])
                {
                    int temp;
                    temp=tianji[l][k+1];
                    tianji[l][k+1]=tianji[l][k];
                    tianji[l][k]=temp;                         
                }
                if(qiwang[l][k]>qiwang[l][k+1])
                {
                    int temp;
                    temp=qiwang[l][k+1];
                    qiwang[l][k+1]=qiwang[l][k];
                    qiwang[l][k]=temp;                         
                }                    
            }    
        }    
    }
    for(int l=0;l<=i-1;l++)
    {
        int t1=0,t2=n[l]-1;
        int q1=0,q2=n[l]-1;
        int count=0;
        for(;t1<=t2;)
        {
            if(tianji[l][t2]>qiwang[l][q2])
            {
                count++;
                t2--;
                q2--;                       
            }        
            else if(tianji[l][t1]>qiwang[l][q1])
            {
                count++;
                t1++;
                q1++; 
            } 
            else if(tianji[l][t1]<qiwang[l][q2])
            {
                count--;
                t1++;
                q2--;
            }
            else
            {
                t1++;
                q2--;
            } 
        } 
        printf("%d\n",200*count);   
    }
    return 0;    
}
