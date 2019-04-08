//********************************
//*???n-gram????**
//*?????1300062805 **
//*???2013.12.17 **
//********************************
int main()
{
    int n, i, len, j, k;
    char a[501];
    char b[501][5];//????????????? 
    int c[501];//??????????????? 
    cin >> n; 
    cin.get();//???? 
    cin.getline( a , 501 );
    char *p;//???????a 
    p = a;
    char (*q)[5];//???????b 
    q = b;
    len = strlen(a);//???????? 
    k = 0;
    for( i = 0 ; i <= len - n ; i ++ )//?????????? 
    {  
        for( j = i; k <= n - 1; j ++, k ++ )    
        {
             q[i][k] = p[j]; 
               
        } 
        k = 0;   
    } 
    int sum;
    int temp = 0;
    int m = 0 ;
    for(i = 0; i <= len - n; i ++ )//????????????????????? 
    { 
        sum = 1;
        for(j = i; j < len - n; j ++) 
        {  
             if( strcmp( q[i], q[j + 1] ) == 0 )//?????sum?? 
             {
                     sum ++;                              
             }     
        }   
     
             if( sum > temp )// 
             {
                     temp = sum;       
                     k = i;
                     memset( c , 0 , sizeof(c) );
                     m = 0;
             }
             else
             {
                     if( sum == temp ) 
                     { 
                             c[m] = i;
                             m ++;
                     }  
             }   
    }     
    if(temp == 1)
    {
        cout << "NO" << endl ;       
    } 
    else 
    {
             cout << temp << endl;
             cout << b[k] << endl;
             for( i = 0 ; i <= m - 1 ; i ++ )
             {
                     cout << b[c[i]] << endl;      
             }
    }
    return 0;
}