//***********************************************************************
//????????????? 
//?????????????
//??????
//***********************************************************************
void out1(int n, char a[]);
void out2(int n, char a[]); 
int main()                                  //??? 
{
    int n;
    char str[100];
    for(int i = 0; i < 6; i++)
    {
            cin>>str;
            n = strlen(str);
            if(str[0] == '-')
            {
                      cout<<str[0];
                      out2(n, str);
            }
            else
            {
                out1(n, str);
            }
    }
            return 0;
}
void out1(int n, char a[])
{
     char temp;
     int c;
     if(n == 1)
          cout<<a<<endl;
     else
     {
     for(int i = n - 1; i >= 0; i--)
     {
             if(a[i] != '0')
             {
                       c = i;
                       break;
             }
     } 
     for(int j = c; j >= 0; j--)
     {
             cout<<a[j];
     }
     cout<<endl;
     }
} 
void out2(int n, char a[])
{
     char temp;
     int c;
     if(n == 2)
          cout<<a[1]<<endl;
     else
     {
     for(int i = n - 1; i > 0; i--)
     {
             if(a[i] != '0')
             {
                       c = i;
                       break;
             }
     } 
     for(int j = c; j > 0; j--)
     {
             cout<<a[j];
     }
     cout<<endl;
     }
} 

    
