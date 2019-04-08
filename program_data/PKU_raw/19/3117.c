int main ()  
{  
    int i,j,index,len,len2;  
    char str[101],word[101],newword[101],temp[101];  
    while(gets(str)){  
        index = 0;  
        len = strlen(str);  
        cin>>word;  
        cin>>newword;  
        for(i=0;i<=len;i++){  
            if(str[i] == ' ' || i == len){  
                temp[index] = '\0';  
                if(strcmp(temp,word) == 0){  
                    cout<<newword;  
                }  
                else{  
                    cout<<temp;  
                }  
                if(str[i] == ' '){  
                    printf(" ");  
                }  
                else{  
                    printf("\n");  
                }  
                index = 0;  
                memset(temp,0,sizeof(temp));  
            }  
            else{  
                temp[index++] = str[i];  
            }  
        }  
        getchar();  
    }  
    return 0;  
}
