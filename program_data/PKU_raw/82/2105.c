int main(){
    int n;
    scanf("%d",&n);
    int sz[n][2],i;
    for(i=0;i<n;i++){
        scanf("%d%d",&sz[i][1],&sz[i][2]);
    }
    int sz2[n],j=0;
        for(i=0;i<=n;i++){
        sz2[i]=0;

    }
    for(i=0;i<n;i++){
        if(sz[i][1]>=90&&sz[i][1]<=140&&sz[i][2]>=60&&sz[i][2]<=90)
        {
            sz2[j]++;
            
        }else{
            j++;
        }
    }
    int max=0;
    for(i=0;i<=j;i++){
        if(sz2[i]>max){
            max=sz2[i];
        }
    }

    printf("%d",max);

    return 0;
}
