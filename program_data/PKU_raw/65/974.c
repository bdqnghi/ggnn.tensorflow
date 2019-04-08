int main() {
    int n;
    scanf("%d",&n);
    int sz[n][2];
    int i;
    for(i=0;i<n;i++) {
        scanf("%d %d",&(sz[i][0]),&(sz[i][1]));
    }
    int A=0,B=0,k;
    for(i=0;i<n;i++) {
        k=sz[i][0]-sz[i][1];
        if(k==-1||k==2) {
            A++;
        }
        if(k==1||k==-2) {
            B++;
        }
    }
    if(A>B) {
        printf("A");
    }
    if(A<B) {
        printf("B");
    }
    if(A==B) {
        printf("Tie");
    }
    return 0;
}