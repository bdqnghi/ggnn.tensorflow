
int main(int argc, char* argv)
{
    int n;
    char str[30];
    int len;
    scanf("%d",&n);
    while(n-->0)
    {
        scanf("%s",str);
        len = strlen(str);
        switch(str[len - 1])
        {
            case 'r'://er
            case 'y'://ly
                str[len-2] = 0;
                break;
            case 'g'://ing
                str[len-3]=0;
                break;
        }
        printf("%s\n",str);
    }
    return 0;
}
