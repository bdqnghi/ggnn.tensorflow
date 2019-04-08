int main()
{
    int n,i,j,k,max;
    char name[2000][30],alp[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    int No[2000],num[30]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %s",&No[i],name[i]);       
    }
    for(i=0;i<26;i++){               
        for(k=0;k<n;k++){
            for(j=0;j<strlen(name[k]);j++){
                if(name[k][j]==alp[i]){
                    num[i]++;
                    break;
                }
            }
        }
    }
    max=num[0];
    for(i=1;i<26;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    for(i=0;i<26;i++){ 
        if(num[i]==max){
            printf("%c\n%d\n",alp[i],max);
            for(k=0;k<n;k++){
                for(j=0;j<27;j++){
                    if(name[k][j]==alp[i]){
                        printf("%d\n",No[k]);
                        break;
                    }
                }
            }
        }
    }
    return 0;
}

