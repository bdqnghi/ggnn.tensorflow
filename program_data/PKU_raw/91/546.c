// ??:??? ???1000010500 
// ??????? 
// 2010-12-15


int main()
{   
    char s[101],c;
    int i;
    cin.getline(s,101);                       
    c = s[0];
    for (i = 0;s[i + 1] != '\0';i++)
        s[i] += s[i + 1];              // ASC??? 
    s[i] += c;                         // i??????? ?????? 
    for (i = 0;s[i] != '\0';i++)
        cout << s[i];
    return 0;
} 
    
