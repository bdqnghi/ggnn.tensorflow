

int main(){
    int N;
    cin>>N;
    int * ar;
    if(NULL==(ar=(int *) malloc(N*sizeof(int)))){
        perror("error...");
        exit(1);
    }
    for(int i=0;i<N;i++) cin>>*(ar+i);
    for(int i=0;i<N;i++) {
        cout<<*(ar+N-i-1);
        if(i!=N-1) cout<<' ';
    }
    free(ar);
    ar=NULL;
    return 0;
}
