/**
 * IC::Final 2012-01-04
 * By Lu Junshi (1000010158)
 * <lujunshi@pku.edu.cn>
 * On 162.105.66.47
 */


typedef struct ngram{
    char str[10];
    int count;
} ngram;

/*bss*/
char input[555];
int cc=0;
ngram array[555];

int cmp_sort(const void *a, const void *b){
    ngram *pa=(ngram*)a, *pb=(ngram*)b;
    int k=pb->count - pa->count;
    if(k) return k;
    return a-b; //input order
}

int main()
{
    int n, i, len=0, max;
    char *p, str[10];
    scanf("%d", &n);
    gets(input);
    gets(p=input);
    len=strlen(input);
    while(p-input<=len-n){
        strncpy(str, p, n);
        str[n]=0;
        for(i=0; i<cc; i++)
            if(!(strcmp(array[i].str, str))){
                array[i].count++;
                goto found;
            }
        strcpy(array[cc].str, str);
        array[cc++].count=1;
        found: p++; continue;
    }
    qsort(array, cc, sizeof(ngram), cmp_sort);
    max=array[0].count;
    if(max>1){
        printf("%d\n%s\n", max, array[0].str);
        for(i=1; i<cc; i++) if(array[i].count==max) puts(array[i].str);
    }
    else puts("NO");
    return 0;
}
