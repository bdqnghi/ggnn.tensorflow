int main()
{
    int n;
    scanf("%d",&n);
    if (n%(3*5*7)==0) printf("3 5 7\n");
    else if (n%(3*5)==0) printf("3 5\n");
    else if (n%(3*7)==0) printf("3 7\n");
    else if (n%(5*7)==0) printf("5 7\n");
    else if (n%3==0) printf("3\n");
    else if (n%5==0) printf("5\n");
    else if (n%7==0) printf("7\n");
    else printf("n\n");
    return 0;    
}