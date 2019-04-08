int main(){
    int a=0,b=0,n,i;
    int ga[200],gb[200];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&ga[i],&gb[i]);
        if(ga[i]==0&&gb[i]==1){
            a+=1;
        }
        else if(ga[i]==0&&gb[i]==2){
            b+=1;
        }
        else if(ga[i]==1&&gb[i]==0){
            b+=1;
        }
        else if(ga[i]==1&&gb[i]==2){
            a+=1;
        }
        else if(ga[i]==2&&gb[i]==0){
            a+=1;
        }
        else if(ga[i]==2&&gb[i]==1){
            b+=1;
        }
        else if(ga[i]==gb[i]){
            continue;
        }
    }
    if(a==b){
        printf("Tie");
    }
    else if(a>b){
        printf("A");
    }
    else if(a<b){
        printf("B");
    }
    return 0;
}
