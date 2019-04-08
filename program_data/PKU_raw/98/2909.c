
int main()
{
    // FILE *flog = fopen("log.txt", "w"); 
    // for (int i = 0; i < 8; i++) printf("1234567890");
    // printf("\n");
    int n,i,l[300],line=0,f;
    char word[300][30];
    scanf("%d", &n);
    for(i=1;i<=n;i++){
                      scanf("%s", word[i]);
                      l[i]=strlen(word[i]);
                      }
    for(i=1;i<=n;i++){
                        f=0;
                        // fprintf(flog, "WORD (%d) %s = %d, NEXT (%d) %s = %d, LINE = %d\n", i, word[i], l[i], i + 1, word[i + 1], l[i + 1], line);
                        if(line+l[i]<=80)
                        {
                            printf("%s", word[i]);line+=l[i];
                            // fprintf(flog, "L = %d\n", line + l[i + 1] + 1); 
                            if(i != n && line+l[i+1]+1<=80){printf(" ");line+=1;f=1;}
                        }
                            // fprintf(flog, "F = %d\n", f); 
                        if(line>80||f==0)
                        {printf("\n");line=0;}
                        
                        
                    }
    // while(1);
    return 0; 
    }
