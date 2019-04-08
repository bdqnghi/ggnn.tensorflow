
int main() {
    char s[1000],t[1000];
    int len;
    int n;
    scanf("%d",&n);
    while (n-->0) {
        scanf("%s",s);
        len = strlen(s);
        memset(t,' ',len);
        t[len] = 0;

        for(int i = 0; i < len; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                t[i] = '$';
            }
            char match = ' ';
            if (s[i] == ')') {
                match = '(';
            } else if (s[i] == ']') {
                match = '[';
            } else if (s[i] == '}') {
                match = '{';
            }
            if (match != ' ') {
                for(int j = i-1; j>= 0; j--) {
                    if (t[j] == '$') {
                        if (s[j] == match){
                            t[j] = ' ';
                            match = ' ';
                        }
                        break;
                    }
                }
                if (match != ' ') {
                    t[i] = '?';
                }
            }
        }
        printf("%s\n%s\n",s, t);
    }
}