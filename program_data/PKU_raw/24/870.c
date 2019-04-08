
int main(int argc, char *argv[])
{
    char s[500],words[50][500];
    int  n,k,i,len[50],max=0,min=100000,da=0,xiao=0;
    gets(s);
    
     // ?s???????????words?
    n = 0; k = 0;
    for (i = 0; s[i]!=0; i++) {
        if (s[i] == ' ') {
            s[i] = '\0';
            strcpy(words[n], (s + k));
            n++;
            k = i + 1;
        }
    }
    strcpy(words[n], (s + k));
    n++;

    
    
    for(i=0;i<n;i++){
                     len[i]=strlen(words[i]);
                     if(len[i]>max){
                                    da=i;
                                    max=len[i];
                                    }
                                    }
                                    
    for(i=0;i<n;i++){
                     len[i]=strlen(words[i]);
                     if(len[i]<min){
                                    xiao=i;
                                    min=len[i];
                                    }
                                    }
                                    
    printf("%s\n",words[da]);
    printf("%s\n",words[xiao]);
    
  
  
  return 0;
}
