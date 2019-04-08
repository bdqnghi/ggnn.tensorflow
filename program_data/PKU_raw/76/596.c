int main(){
    int n,i,k,t,p,m,q,a;
    a=0;
    scanf("%d",&n);
    struct l{
        int x,y;
    }l[n],e;
    for(i=0;i<n;i++){
        scanf("%d%d",&(l[i].x),&(l[i].y));
    }
    for(k=1;k<n;k++){
        for(i=0;i<n-k;i++){
            if(l[i].x>l[i+1].x){
                e=l[i];
                l[i]=l[i+1];
                l[i+1]=e;
            }
        }
    }
    m=0;
    for(t=0;t<n;t++){
        if(l[t].y>l[m].y){
            m=t;
        }
    }
    for(q=1;q<n;q++){
        for(p=0;p<q;p++){
             if(l[p].y>=l[q].x){
                  break;
             }
             if(p==q-1&&l[p].y<l[q].x){
                 a=1;
                 
             }
        }
    }
    if(a==0){
            printf("%d %d",l[0].x,l[m].y);
    }
    else{
        printf("no");
    }
    //lp:printf("e%d %d",q,p);
    return 0;
}

