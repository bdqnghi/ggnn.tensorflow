

int main(int argc, char *argv[])
{
    int n,i,j,t;
    scanf("%d",&n);
    char a[300];
    for(i=1;i<=n;i++)
    {
                     scanf("%s", a);
                     for(j=0;a[j]!='\0';j++)
                     { 
                                            if(a[j]=='A')
                                            a[j]='T';
                                            else if(a[j]=='T')
                                            a[j]='A';
                                            else if(a[j]=='C')
                                            a[j]='G';
                                            else if(a[j]=='G')
                                            a[j]='C';
                     }
                     printf("%s\n",a);
    }
    
    return EXIT_SUCCESS;
}
