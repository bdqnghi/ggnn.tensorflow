

char maxASCII(char *str)
{
     int len= strlen(str);
     int i,j=0;
     for(i=0; i<len; i++){
              if(str[i]> j) j= str[i];
     }
     return j;
}
int maxlocate(char string[], char maxx)
{
     int x;
     for(x=0; x<strlen(string); x++){
              if(string[x] == maxx){
                           return x;
              }
     }
}

int main(int argc, char *argv[])
{
    char str[100][10], substr[100][4];
    int max;      int rank;
    int i,j;      j=0;
    while(scanf("%s%s",str[j],substr[j])!= EOF) j++;
    for(i=0; i<j; i++){
             
            
            max= maxASCII(str[i]);
            rank = maxlocate(str[i], max);
            int a;
            for(a=0; a<=rank; a++){
                     cout << str[i][a];
            }
            cout << substr[i];
            for(a= rank+1; a<strlen(str[i]); a++){
                   cout << str[i][a];
            }                  
            cout << endl;
    }
    
    return EXIT_SUCCESS;
}
