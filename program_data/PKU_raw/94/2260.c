int main(){
    int N=0;
    scanf("%d",&N);
    int i=0;
    int zhengzhengshu[501]={0};
    for(i=0;i<N;i++){
        scanf("%d",&zhengzhengshu[i]);
    }
    int jishu[500]={0};
    int j=0,p=0;
    for(j=0,p=0;j<N;j++){
        if(zhengzhengshu[j]%2==1){
            jishu[p]=zhengzhengshu[j];
            p++;
        }
    }
    int temp=0;
    int q=0;
    for(q=0;q<p;q++){
        for(int m=q;m<p;m++){
            if(jishu[q]>jishu[m]){
                temp=jishu[q];
                jishu[q]=jishu[m];
                jishu[m]=temp;
            }
        }
    }
    for(int b=0;b<p-1;b++){
        printf("%d,",jishu[b]);
    }
    int b=p-1;
    printf("%d",jishu[b]);
    return 0;
}


