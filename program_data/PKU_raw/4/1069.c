

int main(){
    int row,col;
    int matrix[120][120];
    cin>>row>>col;
    int * p[100];
    for (int i=0; i<row; i++) {
        p[i]=&matrix[i][0];
        for (int j=0; j<col; j++) {
            cin>>matrix[i][j];
            
        }
    }
    if (col>=row) {
        for (int i=0; i<col; i++) {
            for (int j=0; (i-j)<col && (i-j)>=0 && j<row; j++) {
                cout<<* (p[j]+i-j)<<endl;
            }
            
        }
        for (int i=col; i<(col+row-1); i++) {
            for (int j=col-1; i-j<row; j--) {
                cout<<* (p[i-j]+j)<<endl;
            }
        }
    }
    else {
        for (int i=0; i<col; i++) {
            for (int j=0; (i-j)<col && (i-j)>=0 && j<row; j++) {
                cout<<* (p[j]+i-j)<<endl;
            }
            
        }
        for (int i=col; i<(col+row-1); i++) {
            for (int j=col-1; i-j<row && j>=0; j--) {
                cout<<* (p[i-j]+j)<<endl;
            }
        }
        
    }
    
}