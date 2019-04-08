int main()
{
    int n;
    scanf("%d", &n);
    struct space{
        int a;
        int b;
    }s[n];
    for (int c=0; c<n; c++) {
        scanf("%d %d", &(s[c].a), &(s[c].b));
    }
    int j, r;
    for (j=1; j<n; j++) {
        int aa=s[j].a;
        int bb=s[j].b;
        for (r=j-1; r>=0; r--) {
            if (aa<s[r].a) {
                s[r+1].a=s[r].a;
                s[r+1].b=s[r].b;
                s[r].a=aa;
                s[r].b=bb;
            }
            else
            {
                s[r+1].a=aa;
                s[r+1].b=bb;
                break;
            }
        }
    }
    int max=0;
    for (int f=0; f<n; f++) {
        if (max<s[f].b) {
            max=s[f].b;
        }
    }
    int i=1;
    for (int g=1; g<n; g++) {
        if ((s[g].a<=s[g-1].b) && (g==!n-1) &&(i==1)) {
            continue;
        }else if ((s[g].a<=s[g-1].b) && (g==n-1)){
            break;
        }else if (s[g].a>s[g-1].b){
            for (int h=0; h<g; h++) {
                if (s[g].a<=s[h].b) {
                    break;
                }else if (s[g].a>s[h].b && h==g-1){
                    i=0;
                    break;
                }
            }
        }
    }
    if (i==0) {
        printf("no");
    }else if (i==1){
        printf("%d %d", s[0].a, max);
    }
    return 0;
}
