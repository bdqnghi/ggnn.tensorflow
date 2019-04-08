
int p(int n,int k){
    if (!k) {
        return 1;
    }
    return n * p(n,k - 1);
}

int main(){
    int n;
    int k;
    scanf("%d %d", &n, &k);
    printf("%d", p(n, n) - k * (n - 1));
    return 0;
}