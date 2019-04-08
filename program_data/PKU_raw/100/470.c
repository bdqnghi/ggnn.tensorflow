
int main (int argc, char *argv[])
{
    int  all, i;
    char str[300],t[300];
    gets(str); 
    all=0;
    memset(t, 0, sizeof(t));
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] >= 'a' && str[i] <= 'z') {
                   t[str[i]]++;
                   all++;
        }
    }
    if (all == 0)
       printf("No\n");
    else {
         for (i = 'a'; i <= 'z'; i++){
             if (t[i] > 0){
                printf("%c=%d\n", (char)i, t[i]);
             }
         }
    }
  return 0;
}