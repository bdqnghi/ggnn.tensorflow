int main()  
{  
    int h[25],n,i,j,t,d[25]={0},max=0,in;  
    scanf("%d",&n);  
    for(i=0;i<n;i++)  
    {  
        scanf("%d",&h[i]);  
    } 
    for(i=n-2;i>=0;i--)  
    {  
        for(j=i+1;j<n;j++)  
        {  
            if(h[j]<=h[i]&&d[i]<d[j]+1)   
                d[i]=d[j]+1;   
        }  
    }  
    for(i=0;i<n;i++)  
    {  
        if(d[i]>max)  
        {  
            max=d[i];  
        }  
    }  
    printf("%d",max+1);  
} 