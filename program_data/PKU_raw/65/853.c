
int main() {
    int n;
    scanf("%d",&n);
    struct game{int g1;int g2;}g[n];
    
   
    int i;
    int p=0;
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&(g[i].g1),&(g[i].g2));
        if((g[i].g1==0 && g[i].g2==1) || (g[i].g1==1 && g[i].g2==2)||g[i].g1==2 && g[i].g2==0){p++;}
        else if(g[i].g1==g[i].g2){}
        else{p--;}
        
        
    }
    
    
    if(p>0){printf("A");}
    else if(p<0){printf("B");}
    else if(p==0){printf("Tie");}
    
    
    
    return 0;
}