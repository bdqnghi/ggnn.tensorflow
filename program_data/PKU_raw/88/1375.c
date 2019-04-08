
int main()
{
    char a[999]={'\0'};
    
    int i;
    gets(a);
    
    for(i=0; a[i]!='\0'; i++)
    {
             if(a[i]>='0'&&a[i]<='9')
             {
                 printf("%c", a[i]);
                 if(a[i+1]<'0'||a[i+1]>'9')
                 printf("\n");
             }
    } 
    
    return 0;
}