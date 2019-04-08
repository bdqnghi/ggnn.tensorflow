char ls[1000], ss[1000];
int max, min;
int cl;
char buf[1000];

int main() {
    max = -1;
    min = 0x7fffffff;
    while(scanf("%s", buf) != EOF) {
        cl = strlen(buf);
        if(cl > max) {
            max = cl;
            strcpy(ls, buf);
        }
        if(cl < min) {
            min = cl;
            strcpy(ss, buf);
        }
    }
    puts(ls);
    puts(ss);
return 0;
}
