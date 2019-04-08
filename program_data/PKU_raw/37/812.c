int main()
{
 int t;
 cin>>t;
 char a[10][100000] = {{'\0'}},b[10][2] = {{'\0'}};
 for(int i=0;i<t;i++)
   {
    cin >> a[i];
    for(int j=0 ; a[i][j]!='\0' ;j++)
      {
       int flag = 0;
       for(int k=0 ;a[i][k]!='\0';k++)
         {
          if( k==j ) continue;
          if( a[i][j] == a[i][k] ){ flag = 1 ;break;}     
         }
       if( flag == 0 ) {b[i][0] = a[i][j];break;}   
      }
    if(b[i][0] == '\0') b[i][0]='n',b[i][1]='o';      
   }
 for(int i=0;i<t;i++)cout<<b[i]<<endl<<endl;  
 return 0;    
}