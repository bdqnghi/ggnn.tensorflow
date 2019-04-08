
int main(){
    int m,n,i,j,k,patient=0,flag[103][103];
    char room[103][103];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",room[i]);                 
    scanf("%d",&m);
    
    
    for(k=1;k<m;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++)
                flag[i][j]=0;
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(room[i][j]=='@'&&flag[i][j]==0){
                    if(room[i-1][j]=='.'){
                        room[i-1][j]='@';
                        flag[i-1][j]=1;
                    }
                    if(room[i+1][j]=='.'){
                        room[i+1][j]='@';
                        flag[i+1][j]=1;
                    }
                    if(room[i][j-1]=='.'){
                        room[i][j-1]='@';
                        flag[i][j-1]=1;
                    }
                    if(room[i][j+1]=='.'){
                        room[i][j+1]='@';
                        flag[i][j+1]=1;
                    }
                }                
            }                 
        }                 
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(room[i][j]=='@')
                patient++;                 
        }                 
    }
    
    printf("%d",patient);
    
    return 0;
}
