int main(){
    int i, a, n, m, t, z=0;
    char old[200][200], newa[200][200];
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s\n", old[i]);
        strcpy(newa[i],old[i]);
    }
    scanf("%d", &m);
    for (t=0; t<m-1; t++) {
        for (i=0; i<n; i++) {
            for (a=0; a<n; a++) {
                if (old[i][a]=='@') {
                    if (old[i+1][a]=='.') {
                        newa[i+1][a]='@';
                    }
                    if (old[i-1][a]=='.') {
                        newa[i-1][a]='@';
                    }
                    if (old[i][a+1]=='.') {
                        newa[i][a+1]='@';
                    }
                    if (old[i][a-1]=='.') {
                        newa[i][a-1]='@';
                    }
                }
            }
        }
        for (i=0; i<n; i++) {
            strcpy(old[i],newa[i]);
        }
    }
    for (i=0; i<n; i++) {
        for (a=0; a<n; a++) {
            if (newa[i][a]=='@') {
                z++;
            }
        }
    }
    printf("%d", z);
    return 0;
}  
