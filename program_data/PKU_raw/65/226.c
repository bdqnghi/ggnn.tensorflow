int main(){
    int n,i,a,b,total;
    total=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a==0&&b==0){
        }
        else if(a==0&&b==1){
            total++;
        }
        else if(a==0&&b==2){
            total--;
        }
        else if(a==1&&b==0){
            total--;
        }
        else if(a==1&&b==1){
        }
        else if(a==1&&b==2){
            total++;
        }
        else if(a==2&&b==0){
            total++;
        }
        else if(a==2&&b==1){
            total--;
        }
        else if(a==2&&b==2){
        }
    }
    if(total==0){
        printf("Tie");
    }
    else if(total<0){
        printf("B");
    }
    else{
        printf("A");
    }
    return 0;
}
