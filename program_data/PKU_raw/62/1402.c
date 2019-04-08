int main()
{
    char *p;
    int i;
    void guolv(char *p);
    p=(char *)malloc(1000);
    gets(p);
    guolv(p);
        return 0;
}

void guolv(char *p)
{
     int i;
     for(i=0;(*(p+i))!='\0';i++)
     {
                                if(((*(p+i))==' ')&&((*(p+(i+1)))==' '));
                                else
                                printf("%c",*(p+i));
     }
}