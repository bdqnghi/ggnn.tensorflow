//***********************************************************************
//????????? 
//????????? 
//??????
//***********************************************************************
int match(int i);        //????
char str[101];
int n; 
int main()                                  //??? 
{ 
    while(cin>>str)                        //???? 
    {
                   cout<<str<<endl; 
                   n = strlen(str);
                   match(0);
                   cout<<str<<endl; 
    } 
    return 0;
}
int match(int i)       //???? 
{
     if(i == n)                           //???? 
          return 0; 
     else if(str[i] == ')')              //?????? 
     {
          str[i] = '?'; 
          for(int j = i - 1; j >= 0; j--)
                              if(str[j] == '$')
                              {
                                        str[j] = ' ';
                                        str[i] = ' ';
                                        break; 
                              } 
     }
     else if(str[i] == '(')            //??????$ 
          str[i] = '$'; 
     else 
     {
          str[i] = ' '; 
     } 
     match(i + 1); 
     return 0;
} 
          
