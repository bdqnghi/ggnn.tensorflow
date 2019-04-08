int main()
{
    char a[1000];
    gets(a);
    int i,t;
    t=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            t++;
            if(t!=1) continue;
        }
        else t=0;
        printf("%c",a[i]);    
    }
    return 0;
}
           
        
