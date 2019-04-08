int main(){
    int n,time[200][2],A=0,B=0;
    scanf("%d",&n);
    for(int a=0;a<n;a++){
        scanf("%d %d",&(time[a][0]),&(time[a][1]));
    }
    for(int a=0;a<n;a++){
        if((time[a][0]==0&&time[a][1]==2)){
               B++;
           }
           if(time[a][0]>time[a][1]&&(time[a][0]!=2||time[a][1]!=0)){
                 B++;
           }
          if((time[a][1]==0&&time[a][0]==2)){
               A++;
           }
          if(time[a][1]>time[a][0]&&(time[a][1]!=2||time[a][0]!=0)){
               A++;
           }
    }
    if(A==B){printf("Tie");}
    if(A>B){printf("A");}
    if(A<B){printf("B");}
    return 0;
}