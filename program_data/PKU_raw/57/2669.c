
int main(){
    int N,l,i;
    char a[100];
    
    scanf("%d",&N);
    while (N--){
        scanf("%s",a);
        l = strlen(a);
        if (strcmp(a + l - 2, "ly") == 0) l-=2;
        if (strcmp(a + l - 2, "er") == 0) l-=2;
        if (strcmp(a + l - 3, "ing") == 0) l-=3;
        for (i=0;i<l;i++) printf("%c",a[i]);
        printf("\n");
    }

    return 0;
}