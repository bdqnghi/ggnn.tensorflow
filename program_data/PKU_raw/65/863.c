int main(){
    int n,i,j;
    scanf("%d",&n);
    int sum=0;
    int tie=0;
    int cai[200][2];
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            scanf("%d",&cai[i][j]);
        }
        if((cai[i][0]==0&&cai[i][1]==1)||(cai[i][0]==1&&cai[i][1]==2)||(cai[i][0]==2&&cai[i][1]==0)){
            sum=sum+1;
        }
        if(cai[i][0]==cai[i][1]){
            tie=tie+1;
        }
    }
    if(n%2==0){
        if(sum>(n-tie)/2){printf("A");}
        if(sum<(n-tie)/2){printf("B");}
        if(sum==(n-tie)/2){printf("Tie");}
    }
    if(n%2==1){
        if(sum>(n-tie-sum)){printf("A");}
        if(sum<(n-tie-sum)){printf("B");}
        if(sum==(n-tie-sum)){printf("Tie");}
    }
    
    return 0;
}






