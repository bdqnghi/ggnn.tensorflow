int main(){
    char a[100][101];
    char b[100][101];
    int n;

    cin>>n;


    //??
    for(int i=0;i<n;i++){cin>>a[i];}



/*
    strcpy(a[0],"....#");
    strcpy(a[1],".#.@.");
    strcpy(a[2],".#@..");
    strcpy(a[3],"#....");
    strcpy(a[4],".....");
*/
    for(int i=0;i<n;i++){
        strcpy(b[i],a[i]);
    }

    int m;

    cin>>m;
    //????
    for(int k=0;k<m-1;k++){
        //????
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='@'){
                //????
                if(i!=0){
                    if(a[i-1][j]=='.'){b[i-1][j]='@';}
                }
                //???
                if(j!=0){
                    if(a[i][j-1]=='.'){b[i][j-1]='@';}
                }
                //???
                if(i!=n-1){
                    if(a[i+1][j]=='.'){b[i+1][j]='@';}
                }
                //???
                if(j!=n-1){
                    if(a[i][j+1]=='.'){b[i][j+1]='@';}
                }

            }
        }
        }
        for(int i=0;i<n;i++){
        strcpy(a[i],b[i]);
        }


    }
    //??
    int p=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]=='@'){p+=1;}
        }
    }
    cout<<p;


}