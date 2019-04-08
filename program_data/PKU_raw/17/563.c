    
char str[101], bracket[101];
int len;
void match(int a);

int main()
{
    while (cin.getline(str, 101))
    {
        len = strlen(str);
        for (int i = 0; i < len; i++)
            if (str[i] == '(') bracket[i] = '$';
            else if (str[i] == ')') bracket[i] = '?';
            else bracket[i] = ' ';
        match(1);
        for (int i = 0; i < len; i++)
            cout << str[i];
        cout << endl;
        for (int i = 0; i < len; i++)
            cout << bracket[i];
        cout << endl;
    }

    return 0;
}  
        
void match(int a)
{
     if (a == len) return;
     int b = a - 1;
     if (bracket[a] == '?')
     {
         while (bracket[b] == ' ')
         {
             if (b == 0) 
             {
                 match(a + 1);
                 return;
             }
             b--;
         }
         if (bracket[b] == '?') 
         {
             match(a + 1);
             return;
         }
         bracket[b] = ' ';
         bracket[a] = ' ';
         match(a + 1);
     }
     else match(a + 1);
}
         
        
