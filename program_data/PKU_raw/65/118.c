int main(){
    int n;
    int a[200],b[200];
    int A,B;
    A=0;
    B=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
    }
    for(int j=0;j<n;j++){
        if(a[j]==b[j]){A++;B++;}
        else if((a[j]==0)&&(b[j]==1)){A++;}
        else if((a[j]==1)&&(b[j]==2)){A++;}
        else if((a[j]==2)&&(b[j]==0)){A++;}
        else{B++;}
    }
    if(A>B)printf("A");
    if(B>A)printf("B");
    if(B==A)printf("Tie");
    return 0;}