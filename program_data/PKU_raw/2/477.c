
int main() {
    struct book1 {
        int num;
        char author[20];
    } book[999];
    int time[26]={0};
    int n, i, j, k, maxi, sign=0;
    scanf("%d", &n);
    for (i=0;i<n;i++) {
        scanf("%d%s", &book[i].num, book[i].author);
    }
    for (i=0;i<n;i++) {
        for (j=0;book[i].author[j]!='\0';j++) {
            for (k=0;k<26;k++) {
                if (book[i].author[j]=='A'+k) {
                    time[k]+=1;
                    break;
                }
            }
        }
    }
    maxi=0;
    for(i=0;i<26;i++) {
        if (time[maxi]<time[i]) {
            maxi=i;
        }
    }
    printf("%c\n%d\n", 'A'+maxi, time[maxi]);
    for (i=0;i<n&&sign==0;i++) {
        for (j=0;book[i].author[j]!='\0';j++) {
            if (book[i].author[j]=='A'+maxi) {
                printf("\n%d", book[i].num);
                sign=1;
                break;
            }
        }
    }
    for (;i<n;i++) {
        for (j=0;book[i].author[j]!='\0';j++) {
            if (book[i].author[j]=='A'+maxi) {
                printf("\n%d", book[i].num);
                break;
            }
        }
    }
    return 0;
}