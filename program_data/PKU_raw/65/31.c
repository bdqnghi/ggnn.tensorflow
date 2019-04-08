int main(){
    int n,a[200],b[200],i,c,d,e;
    scanf("%d",&n);
    c=0;
    d=0;
    e=0;
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i],&b[i]);
        if(((a[i]==0)&&(b[i]==1))||((a[i]==1)&&(b[i]==2))||((a[i]==2)&&(b[i]==0))){
            c++;
        }
        else if(((a[i]==1)&&(b[i]==0))||((a[i]==2)&&(b[i]==1))||((a[i]==0)&&(b[i]==2))){
            d++;
        }
        else{
            e++;
        }
    }
    if(c>d){
        printf("A");
    }
    else if(c<d){
        printf("B");
    }
    else if(c==d){
        printf("Tie");
    }
    return 0;
}
