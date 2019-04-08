

char a[1000];

int main()
{
    gets(a);
    char *p = a;
    cout << *p;
    for(int i = 1; i < strlen(a); i++){
        if(*(p+i-1)==' '&&*(p+i)==' ')
            continue;
        cout << *(p+i);
    }
}
