
int main(int argc, char *argv[])
{
    char *p,a[101];
    for(p=gets(a);*p;p++)
    {
        if(*p==' '&&*(p-1)==' ') continue;
        printf("%c",*p);
    }
    return 0;
}
