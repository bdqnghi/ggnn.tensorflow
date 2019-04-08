

int main(){
    char S[1000];
    memset(S,0,sizeof(S));

    cin>>S;

    int LEN=strlen(S),nn=0;
    char n='0';
    for(int i=0;i<=LEN;i++){
        char de=(isupper(S[i])==1) ? S[i] : toupper(S[i]);
        if(n=='0'||de!=n||i==LEN){
            if(n!='0') cout<<'('<<n<<','<<nn<<')';
            n=de;
            nn=1;
        }
        else{
            nn++;
        }
    }

    return 0;
}
