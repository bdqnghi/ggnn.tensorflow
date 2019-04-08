int main()
{
    int m=0,i=0;
    char y[1001],h[1001];
    gets(y);
    for(i=0;y[i]!='\0';i++)
    {
        if(y[i]!=' ')
        {
              h[m]=y[i];
              m++;
        }
        else if(y[i]==' '&&y[i+1]!=' ')
        {
             h[m]=' ';
             m++;
        }
        else
        {
            continue;
        }
    }
    h[m]='\0';
    cout<<h<<endl;
    return 0;
}
