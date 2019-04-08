
int main()
{
    int k=0,count=0;
    int count1=0,count2=0;
    int max=0;
    int num[25][2];
    
    scanf("%d",&k);
    for(count=0;count<k;++count)
    {
        scanf("%d",&num[count][0]); 
        num[count][1]=0;   
    }    
    for(count1=0;count1<k;++count1)
    {
        max=0;
        for(count2=0;count2<count1;++count2)
        {
            if(num[count2][1]>= max && num[count2][0]>=num[count1][0]) 
            {
                max = num[count2][1];
                num[count1][1]=max+1;    
            }        
        }   
    }
    max = 0;
    for(count=0;count<k;++count)
    {
        if(num[count][1]>=max)
        {
            max = num[count][1];    
        }    
    }
    printf("%d",max+1);
}