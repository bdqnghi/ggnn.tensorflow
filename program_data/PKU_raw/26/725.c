
int main()
{
        char a[101];
        int i;
        gets(a);

        for (i=0;i<strlen(a);i++) {
                if (a[i]!=' ')
                        printf("%c",a[i]);
                else if (a[i]==' ') {
                        if (a[i+1]==' ') {
                                do {
                                        ++i;
                                } while (a[i]==' ');
                                printf(" ");


                                printf("%c",a[i]);
                        } else printf(" ");
                }

        }

        return 0;
}

