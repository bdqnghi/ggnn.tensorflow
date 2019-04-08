
void fun(char data[])
{
     int len = strlen(data);
     int i;
     int ya;
     
     ya = ( *data == '_' || (*data >= 'A' && *data <= 'z') );
     
     for(i = 1; i <= len - 1; i++)
           if(!alphabet && !number)
                     ya = 0;
     
     if(ya == 0) printf("no\n"); else printf("yes\n");

}

int main()
{
    int n;
    scanf("%d\n", &n);
    int i;
    char data[81];
    
    for(i = 1; i <= n; i++)
    {
          gets(data);
          fun(data);
    }
        
    return 0;
}