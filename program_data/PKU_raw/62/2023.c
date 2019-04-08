char a[100];
int i;
void sf()
{
     int l = strlen(a);
     char *p = a;
     for(p = a, i = 0; i < l; p++, i++)
     {
             if(*p!=' '||(a[i]==' '&& *(p + 1)!=' ')) 
             {
                 cout << a[i] ;
             }
     }
     return ;
}     
int main()
{
    cin.getline(a,100);
    sf();
    cin >> a;
    return 0;
}
    
