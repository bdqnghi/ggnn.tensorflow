int main(){
int n,sz[1000],s[1000],i=0,m=0,l=0,k=0;
scanf("%d",&n);
struct cui{
    int x;
    int y;
} cui[300];
for(i=0;i<n;i++){
    scanf("%d%d",&cui[i].x,&cui[i].y);
}
m=0;
for(i=0;i<n;i++){
    if(cui[i].x==cui[i].y){
        m=m+1;
    }
    if(cui[i].x==0){
        if(cui[i].y==1){
            k=k+1;
        }
        else if(cui[i].y==2){l=l+1;}
    }
    else if(cui[i].x==1){
        if(cui[i].y==0){l=l+1;}
        else if(cui[i].y==2){k=k+1;}
    }
    else if(cui[i].x==2){
        if(cui[i].y==0){k=k+1;}
        else if(cui[i].y==1){l=l+1;}
    }}

    if(k>l){
        printf("A");
    }
    else if(l>k){
        printf("B");
    }
    else if(l=k){
        printf("Tie");
    }
    return 0;
}