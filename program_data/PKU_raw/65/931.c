int main(){
    int a,b,n,i,k=0,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        if(a==0&&b==1){k++;}
        else if(a==1&&b==2){k++;}
        else if(a==2&&b==0){k++;}
        else if(a==b){p++;}
    }
    if(k>1.0*(n-p)/2){printf("A");}
    else if(k<1.0*(n-p)/2){printf("B");}
    else{printf("Tie");}
    return 0;
}
