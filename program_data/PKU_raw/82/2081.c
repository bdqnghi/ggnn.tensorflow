int main()
{
    int n,i,j=0,max;
    int bp[N][2];
    int state[N]={0};
    int hou[N]={0};
    scanf("%d",&n);
    for(i=0;i<=n-1;i++){
        scanf("%d%d",&bp[i][0],&bp[i][1]);
    }
    for(i=0;i<=n-1;i++){
        if(((bp[i][0]>=90)&&(bp[i][0]<=140))&&((bp[i][1]>=60)&&(bp[i][1]<=90))){
          state[i]=1;
        }          //????????????????1
    }
    state[n]=0;
    for(i=0;i<=n;i++){
        if(state[i]==1){
           j++; 
        }
        else{
            hou[i]=j;
            j=0;
        }
    }             //?hou[i]??????????????
    max=hou[0];
    for(i=0;i<=n;i++){
        if(max<hou[i]){
            max=hou[i];
        }
    }            //?hou[i]???
    printf("%d",max);
    return 0;
}


