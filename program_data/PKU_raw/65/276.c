int main(){
    int n;
    scanf("%d",&n);
    int a[200]={0};
    int b[200]={0};
    int i;
    int wina=0,winb=0;
    for(i=0;i<n;i++){
        scanf("%d%d",&a[i],&b[i]);
        if(a[i]==0&&b[i]==1||a[i]==1&&b[i]==2||a[i]==2&&b[i]==0){
            wina++;
        }
        else if(a[i]==1&&b[i]==0||a[i]==2&&b[i]==1||a[i]==0&&b[i]==2){
            winb++;
        }
    }
    if(wina>winb){printf("A");}
    else if(wina<winb){printf("B");}
    else if(wina=winb){printf("Tie");}
    return 0;
}
