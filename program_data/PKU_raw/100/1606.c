int main()
{
    char str[300];
    gets(str);
    int arr[128]={0};
    int i,b=0;
    for (i=0;i<strlen(str);i++) {
        arr[str[i]]++;
        }
    for (i=65;i<91;i++) {
        if (arr[i]>0) {
                    printf("%c=%d\n",i,arr[i]);
                    b=1;
                    }
                    }
    for (i=97;i<123;i++) {
        if (arr[i]>0) {
                    printf("%c=%d\n",i,arr[i]);
                    b=1;
                    }
                    }
    if (b==0) {
             printf("No");
             }
   // puts(str);
    return 0;
}
