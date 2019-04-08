/*bss*/
int stack[MAX], lstack, len;

int main(){
    char c, a=0, b=0;
    int i, j, k;
    while(c=getchar()){
        if(!a) a=c;
        else if (c!=a&&!b) b=c;
        if(c==a) stack[lstack++]=len++;
        else if(c==b) printf("%d %d\n", stack[--lstack], len++);
        else return 0;
    }
}
