
int main() {
    char s[101]={"\0"}, s1[101]={"\0"};
    int i;
    char *pa=s, *pb=s1;
    gets(pa);
    for(i=0;;i++) {
        *(pb+i)=*(pa+i)+*(pa+i+1);
        if (*(pa+i+2)=='\0') break;
    }
    *(pb+i+1)=*(pa+i+1)+*pa;
    printf("%s", s1);
    return 0;
}