


void invert(int ip[],int n)
{
    
    int i;
    int s=1;
    
    for(i=0;i<n;i++)
    {
        if(s==1){printf("%d",ip[n-1-i]);s=0;}
        else{printf(" %d",ip[n-1-i]);}
        
    }
    return;
    
}

int main() {

    int n;
    scanf("%d",&n);
    int ip[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&(ip[i]));
    }
    invert(ip,n);
    
    return 0;
}