int a[16], n=0;
int do_LB(){
    int i, j, c=0;
    for(i=0; i<n; ++i)
        for(j=i+1; j<n; ++j)
            if(a[i]==a[j]+a[j] || a[j]==a[i]+a[i]) c++;
    n=0;
    return c;
}
int main(){
    int cin;
    do{
        scanf("%d", &cin);
        if(cin == -1) return;
        if(cin == 0) printf("%d\n", do_LB());
        a[n++] = cin;
    }while(1);

}
