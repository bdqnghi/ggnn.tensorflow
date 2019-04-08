int main(){
    char sz[500];
    int i,n;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%s",sz);
        if (sz[strlen(sz)-1]=='r')  sz[strlen(sz)-2]='\0';
       if (sz[strlen(sz)-1]=='y') sz[strlen(sz)-2]='\0';
       if (sz[strlen(sz)-1]=='g')  sz[strlen(sz)-3]='\0';
      printf("%s\n",sz);
    }
    return 0;
}
