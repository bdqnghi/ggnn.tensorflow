
int main() {
    int num[26]={0}, m, i, k, l=0;
    char c, temp[3000];
    for(k=0;c!='\n';k++) {
        c=getchar();
        temp[k]=c;
        m=i;
        for(i=0;i<=26;i++) {
            if (c=='A'+i||c=='A'+i+32) {
                num[i]=num[i]+1;
                break;
            }
        }
        if (k>0&&((temp[k]!=temp[k-1])&&(temp[k-1]+32!=temp[k])&&(temp[k]+32!=temp[k-1]))) {
            if (temp[k-1]>=97) {
                temp[k-1]=temp[k-1]-32;
            }
            printf("(%c,%d)", temp[k-1], num[m]);
            num[m]=0;
            l=0;
        }
    }
    return 0;
}
