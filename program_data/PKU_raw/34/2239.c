
int isodd( int n)
{
        if (n % 2 == 0)
                return 1;
        else
                return 0;
}

int forodd(int n)
{
        printf("%d/2=%d\n", n, n/2);
        return n/2;
}

int fornot(int n)
{
        printf("%d*3+1=%d\n", n, n*3+1);
        return (n*3+1);
}

int main()
{
        int a = 0;
   //     char k,s; id[120] = {0}, rate[120] = {0};

        scanf("%d\n", &a);
        while (a != 1) {
                if (isodd(a))
                        a = forodd(a);
                else
                        a = fornot(a);
        }
        printf("End");
        return 0;
}
