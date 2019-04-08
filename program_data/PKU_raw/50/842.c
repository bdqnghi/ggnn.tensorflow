int main()
{
    int w,i,n;
    scanf("%d", &w);
    n=w+12; if(n%7==5) printf("1\n");
    n+=31; if(n%7==5) printf("2\n");
    n+=28; if(n%7==5) printf("3\n");
    n+=31; if(n%7==5) printf("4\n");
    n+=30; if(n%7==5) printf("5\n");
    n+=31; if(n%7==5) printf("6\n");
    n+=30; if(n%7==5) printf("7\n");
    n+=31; if(n%7==5) printf("8\n");
    n+=31; if(n%7==5) printf("9\n");
    n+=30; if(n%7==5) printf("10\n");
    n+=31; if(n%7==5) printf("11\n");
    n+=30; if(n%7==5) printf("12\n");
    return 0;
}
