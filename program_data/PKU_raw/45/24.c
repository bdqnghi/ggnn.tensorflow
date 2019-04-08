
int main(){
    char s[51] , w[51] ;
    int i , k , n ;
    scanf("%s%s", s , w );
    int l = strlen(s);
    for(i = 0 ; i <= 50 && n != 0 ; i++){
        n = 0 ;
        for(k = 0 ; k <= l - 1 ; k++){
            if( s[k] == w[k + i] ) n = n;
            else n = n + 1;
        }
        if( n == 0 ) printf("%d" , i);
    } 
    return(0);

}