int main(){
    int array[1000],i,j,add=0,head,n;
    scanf("%d",&n);
    array[0]=1;
    head=1;
    for (i=0;i<n;i++)
    {
        for (j=0;j<head;j++)
        {
        array[j]=add+array[j]*2;
        add=0;
        if (array[j]>=10)
        {
         add=array[j]/10;
         array[j]=array[j]%10;         
         if (j+1==head)
         {
         array[head]=add;
         add=0;
         head++;    
         break;     
         }     
        }}
    }
    for (i=head-1;i>=0;i--)
        printf("%d",array[i]);
    return 0;
}