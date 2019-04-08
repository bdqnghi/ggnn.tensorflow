int main()//????????????????
{
    char a[1000];//??????? 
    gets(a);//?? 
    int i=0,j,n;//n??? 
    n=strlen(a);
    for(i=0;i<n;i++)
    {
                   while(a[i]==' '&&a[i-1]==' ')//???????????? 
                   {
                              for(j=i+1;j<n;j++)//???? 
                                 a[j-1]=a[j];
                              a[n-1]='\0';
    }                          }
    cout<<a;//?????????                       
    getchar();
    getchar();                  
    return 0;
}
    
