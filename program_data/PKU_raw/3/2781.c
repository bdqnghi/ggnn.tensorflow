int main(){
    int n,k,j;
    int sz[1001];
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&(sz[i]));
    }
    int l=0;
    while(l<n-1){j=l+1;
    while(j<n){
    if(sz[l]+sz[j]==k){printf("yes");
    return 0;
    }j++;
    }
    l++;
    }
    printf("no");
    return 0;
}
