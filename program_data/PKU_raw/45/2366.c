
int main(){
    char sho [51];
    char lon [51];
    char tem [51];
    int a, n, i, j;
    scanf ("%s %s", sho, lon);
    
    a=strlen(sho);
    n=strlen(lon);
    
    for (i=0; i<n; i++){
        if (lon[i]==sho[0]&&lon[i+a-1]==sho[a-1]){
                                                        for (j=i; j<i+a; j++){
                                                            tem[j-i]=lon[j];
                                                            }
                                                            tem [a]='\0';
                                                        if (strcmp(tem,sho)==0){
                                                                                  break;    
                                                                                  }
                                                        }                                                    
        }    
        
    printf ("%d", i);

    return 0;
    }
