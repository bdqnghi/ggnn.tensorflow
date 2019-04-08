int main() {
    char data[31];
    int n,i;
    gets(data);
    for(n=0;data[n]!='\0';n++);
    for(i=0;i<n;i++) {
        if(data[i]<='9'&&data[i]>='0') {
            printf("%c",data[i]);
        } else {
            printf("\n");
        }
    }
    return 0;
}