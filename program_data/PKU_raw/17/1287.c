
int main()
{
    int c = 0;
    char s[300] = {0};
    char s2[300] = {0};
    int top = 0;
    int heap[300] = {0};
    while ( gets(s) != 0 )//end of file
    {
        top = 0;
        int i = 0, len = strlen(s);
        for ( i = 0; i < len; i++ )
        {
            if ( s[i] == '(' )
            {
                heap[top++] = i;
                s2[i] = '$';
            }
            else if ( s[i] == ')' )
            {
                if ( top == 0 )
                {
                    s2[i] = '?';
                }
                else
                {
                    s2[i] = ' ';
                    s2[heap[top-1]] = ' ';
                    top--;
                }
            }
            else
            {
                s2[i] = ' ';
            }
        }
        s2[len] = '\0';
        printf("%s\n%s\n", s, s2);
    }
    return 0;
}
