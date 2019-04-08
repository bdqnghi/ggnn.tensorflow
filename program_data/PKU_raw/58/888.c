int main()
{
 int judge(char x[]);
/* int n;
 n=cin.get() - 48;
 char a[80]={'\0'};
 for( int i = 0; i < n ; i++ )
 {
      cin.getline( a ,80 );
      cout<<judge(a)<<endl<<endl;
 }*/
/* char a[90]={'\0'};
 cin.getline( a ,90 );
 cout<<judge(a)<<endl<<endl;*/
 int n;
 cin>>n;cin.get();
 for( int i = 0; i < n ; i++ )
   {
                    char a[90]={'\0'};
                    cin.getline( a ,90 );
                    cout<<judge(a)<<endl<<endl;
   }
 cin.get();cin.get();
 return 0;  
}
int judge(char x[])//????????????????? 
{
 int rejudge(char x[]);
 if(x[0] == '_' || ( x[0]>=65 && x[0]<=90 )||( x[0]>=97 && x[0]<=122 ))
   if(rejudge(x))return 1;
 return 0;
}
int rejudge(char x[])
{
 for(int i = 0 ; i < 90 ; i++)
   if( x[i]>0&& x[i]<48|| x[i]>57&& x[i]<65|| x[i]>90&& x[i]<95|| x[i]>95&& x[i]<97|| x[i]>122/* x[i] == ' '||x[i] == ','||x[i] == '.'||x[i] == '+'||x[i] == '-'||x[i]<65||x[i]>122*/)return 0;
 return 1;
}