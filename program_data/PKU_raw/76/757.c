
int main() {
   int n;
    scanf("%d",&n);
    
    struct interval{int left;int right;}itv[n];    
    
    int i;
    int min,max;
    min=100000;
    max=0;
    for(i=0;i<n;i=i+1)
    {
        scanf("%d %d",&(itv[i].left),&(itv[i].right));
        if(itv[i].left<min){min=itv[i].left;}
        if(itv[i].right>max){max=itv[i].right;}
        
    }
    
    
    int s;
    s=1;
    int j;
   
    
    for(i=0;i<n;i=i+1)//????????????????????????????????
    {
        if(itv[i].left!=min)
        {
            s=0;
            for(j=0;j<n;j=j+1)
            {
                if(j!=i)
                {
                    if(itv[i].left>=itv[j].left && itv[i].left<=itv[j].right){s=1;}
                    
                }
            }
            if(s==0){break;}
        }
    }
    

    
    if(s==0){printf("no");}
    else{printf("%d %d",min,max);}
    return 0;
}