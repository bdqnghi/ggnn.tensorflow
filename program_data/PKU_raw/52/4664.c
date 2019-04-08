

int main(int argc, char *argv[])
{
    int m,n;       int i,j,k;
    cin >> m >> n;
    int ary[m];
    for(i=0; i<m; i++){
             cin >> ary[i];
    }
    for(j=1; j<=n; j++){
             int temp;
             temp= ary[m-1];
             for(k= m-1; k>0; k--){
                      ary[k] =ary[k-1];
             }
             ary[0] = temp;
    }
    for(i=0; i<m; i++){
             cout << ary[i];
             if(i!=m-1)
             {         cout << " ";}
    }
             
   
    return EXIT_SUCCESS;
}
