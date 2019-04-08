int main(){
    int a[200],b[200];
    int n,i,s=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
        if(a[i]==0&&b[i]==1||a[i]==1&&b[i]==2||a[i]==2&&b[i]==0){
            s+=1;
        }else if(a[i]==1&&b[i]==0||a[i]==2&&b[i]==1||a[i]==0&&b[i]==2){
            t+=1;
        }else if(a[i]==b[i]){
            s+=0;
        }
    }
    if(s>t){
        printf("A");
    }else if(s<t){
        printf("B");
    }else if(s=t){
        printf("Tie");
    }
    return 0;
}

