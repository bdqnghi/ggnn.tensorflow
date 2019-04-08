

int main(){
    char scentence[10000];
    int numOfVo=0;
    char voca[101][51];
    char change;

    int lenofc[101]={0};
    int holo;

    double exchange,exch;



    char newscentence[10000];
    int length;
    
    cin.getline( scentence, 10000 );
    length=strlen(scentence);
    for(int i=0;i<strlen(scentence);i++){
          newscentence[i]=scentence[length-i-1];
    }
    for (int i=0;i<strlen(scentence) ; i++) {
        if (newscentence[i]==' ') {
            continue;
        }
        numOfVo=numOfVo+1;
        for (int j=i; j<strlen(scentence); j++) {
            if (newscentence[j]==' ') {
                break;
            }
            voca[numOfVo][j-i+1]=newscentence[j];
            lenofc[numOfVo]=lenofc[numOfVo]+1;
        }
        i=i+lenofc[numOfVo];
    }
    for (int i=1;i<=numOfVo;i++){
        for(int j=1;j<=(lenofc[i]/2);j++){
                change=voca[i][j];
                voca[i][j]=voca[i][lenofc[i]+1-j];
                voca[i][lenofc[i]+1-j]=change;
        }
        
    }
    for (int j=1;j<=lenofc[1];j++){
            cout<<voca[1][j];
        }
    for (int i=2;i<=numOfVo;i++){
        cout<<" ";
        for (int j=1;j<=lenofc[i];j++){
            cout<<voca[i][j];
        }

    }    
    
    

    

    return 0;
    
}
