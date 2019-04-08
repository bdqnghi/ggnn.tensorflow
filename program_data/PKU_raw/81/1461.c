int main()
{
    int s[5][5]={0},m,n,i,j,t;
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            scanf("%d",&s[i][j]);
    }
    scanf("%d%d",&m,&n);
    
    int converse(int p,int q);
    
    if(converse(m,n)){
        for(j=0;j<5;j++){
            t=s[m][j];
            s[m][j]=s[n][j];
            s[n][j]=t;
        }
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                if(j!=4)
                printf("%d ",s[i][j]);
                if(j==4)
                printf("%d\n",s[i][j]);
            }
        }
    } 
    else{
        printf("error");   
    }            
    return 0;
} 

int converse(int p,int q)
{
    int t;
    if(p<0||p>4||q<0||q>4)
        return t=0;
    else  
        return t=1;      
}