/*
  Name:???? 
  Author: ??? 
  Date: 26/12/12 17:01
*/
int main()
{
    char string[10000], subString[300], replacement[1000];
    cin >> string >> subString >> replacement;
    char *p, *q;
    q = replacement;
    p = strstr(string, subString);                                              //??????? 
    if (p != NULL)                                                              //??????? 
    {
        while (*q)
        {
            *p++ = *q++;
        }
    }
    cout << string << endl;                                                     //????????? 
    return 0;
}
    