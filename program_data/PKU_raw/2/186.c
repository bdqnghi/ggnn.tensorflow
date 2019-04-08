
struct book
{
       int id;
       char c[27];
};
int main()
{
    void number_of_books(int n,int *p,struct book book[1000]);
    char max(int n,int *p,struct book book[1000]);
    void name_of_book(int n,int *p,struct book book[1000],int m);
    int *p;
    char s[100],m;
    struct book book[1000];
    int n,i;
    p=(int *)calloc(257,sizeof(int));
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%d %s",&book[i].id,&book[i].c);
    }
    number_of_books(n,p,book);
    m=max(n,p,book);
    printf("%c\n%d\n",m,(*(p+m)));
    name_of_book(n,p,book,m);
    
    return 0;
}

void number_of_books(int n,int *p,struct book book[1000])
{
     int i,j;
     for(i=65;i<91;i++)
     {
                  (*(p+i))=0;
     }
     for(i=0;i<n;i++)
     {
                     for(j=0;book[i].c[j]!='\0';j++)
                     {
                                                    (*(p+book[i].c[j]))++;
                     }
     }
}  

char max(int n,int *p,struct book book[1000])
{
     int i,k=0;
     char m;
     for(i=65;i<91;i++)
     {
                       if((*(p+i))>k)
                       {
                                     k=(*(p+i));
                                     m=i;
                       }
     }
     return (m);
}

void name_of_book(int n,int *p,struct book book[1000],int m)
{
     int i,j;
     for(i=0;i<n;i++)
     {
                     for(j=0;book[i].c[j]!='\0';j++)
                     {
                                                    if((book[i].c[j])==m)
                                                    {
                                                                         printf("%d\n",book[i].id);
                                                                         break;
                                                    }
                     }
     }
}