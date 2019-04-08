
int main()
{
    int n , i , c=0 , t=0 ;
    double num[300] , averg=0 ,  maxd=0 ;
    cin>>n;
    for( i=0 ; i<n ; i++ )
    {
        cin>>num[i];
        averg+=num[i];
    }
    averg/=n;
 // cout<<averg;
    for( i=0 ; i<n ; i++ )
     if( fabs( num[i]-averg ) > maxd ) maxd=fabs( num[i]-averg );
// cout<<maxd;  
    for( i=0 ; i<n ; i++ )
     if( fabs ( fabs( num[i]-averg )-maxd )< 0.000001 ) c++ ;
   
    for( i=0 ; i<n ; i++ )
     if( averg-num[i]>0 && fabs ( (averg-num[i]) - maxd ) <0.000001 ) 
      if( t<c-1 ) { cout<<num[i]<<","; t++ ; }
       else cout<<num[i];
    
     for( i=0 ; i<n ; i++ )
     if( num[i]-averg>0 && fabs( (num[i]-averg) - maxd ) <0.000001 ) 
      if( t<c-1 ) { cout<<num[i]<<","; t++ ; }
       else cout<<num[i]; 
       
  }