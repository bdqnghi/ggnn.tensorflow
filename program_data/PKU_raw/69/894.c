int main()
{
    char a[251], b[251], c[252];
    int i, j, k, tmp = 0;
    scanf("%s%s", a, b);
    k = -1;
    for(i = strlen(a) - 1, j = strlen(b) - 1; i+1 && j+1; i--, j--){
        k++;
        c[k] = tmp+a[i]-'0'+b[j]-'0';
        tmp = c[k]/10;
        c[k] %= 10;
    }
    if(i >= 0){
         while(i >= 0){
             k++;
             c[k] = tmp + a[i]-'0';
             tmp = c[k]/10;
             c[k] %= 10; 
             i--;
         }
     }
     else if(j >= 0){
         while(j >= 0){
             k++;
             c[k] = tmp + b[j]-'0';
             tmp = c[k]/10;
             c[k] %= 10;
             j--;
         }
     }
     if(tmp)c[++k] = tmp;
     while(k >= 0 && c[k] == 0)k--;
     for(i = k; i >= 0; i--)printf("%d", c[i]);
     if(k < 0)printf("0");
     return 0;
}