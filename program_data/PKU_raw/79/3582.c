
int main()
{
    int n[100], m[100], i,j=0;
    for(i=0; i<100; i++){
            scanf("%d %d", &(n[i]), &(m[i]));
            j+=1;
            if (n[i]==0 && m[i]==0){
                break;
        }
    }
    int k, s[j], l, q;
    for(q=0; q<j; q++){
        s[q]=0;
    }
    for (k=0; k<j; k++) {
        for (l=2; l<=n[k]; l++) {
            s[k]=(s[k]+m[k])%l;
        }
    }
    int p;
    for (p=0; p<j-1; p++) {
        printf("%d\n", s[p]+1);
    }
    return 0;
}