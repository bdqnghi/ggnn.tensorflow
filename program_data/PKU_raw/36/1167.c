

int main()
{
    char c[100];
    int num=0;
    int a[256]={0},b[256]={0},i,j;
    scanf("%s",c);
    for(i=0;i<strlen(c);i++){
                             a[c[i]]++;
                             }
    scanf("%s",c);
    for(i=0;i<strlen(c);i++){
                             b[c[i]]++;
                             }
    for(i=0;i<256;i++){
                       if(a[i]!=b[i]){
                                      printf("NO\n");
                                      break;
                                      }
    else{
         num++;
         }
    }
    if(num==256){
                 printf("YES\n");
                 }
    

    return 0;
    }