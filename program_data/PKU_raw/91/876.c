//********************************
//*??????????   **
//*?????? 1200012827 **
//*???2012.12.09  **
//********************************
int main()
{
    char str[101];                                                              //???????????? 
    char Friend[101];
    cin.getline(str,101);
    int len = strlen(str);
    Friend[len] = '\0';
    Friend[len-1] = str[0] + str[len-1];                                            //???????????????? 
    char *p;
    p = str;
    for (int i = 0; i <= len-2; i++)
    {
        Friend[i] = (*p++) + *(p+1);                                              //???????? 
    }
    cout << Friend;                                                             //??????? 
    return 0;
}
    