int main()
{
    char string[260], subString[260], replacement[260], string3[260];
    cin >> string >> subString >> replacement;
    char *p = strstr(string, subString);
    if (p == NULL) {
        cout << string << endl;
        return 0;
    }
    int i = 0, j, k, len1 = strlen(subString), len2 = strlen(replacement);
    for (i = 0; *(p + len1 + i) != '\0'; i++) {
        string3[i] = *(p + len1 + i);
    }
    string3[i] = '\0';
    *p = '\0';
    strcat(string, replacement);
    strcat(string, string3);
    cout << string << endl;
    return 0;
}







