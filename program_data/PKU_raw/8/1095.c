void read(int*,int*);
main()
{
      int a[100000],b[100000];
      read(a,b);
}
void read(int*a,int*b)
{
    int i,n1,n2;
    void bubble(int*,const int);
    void print1(int*,int n);
    void print2(int*,int n);
    scanf("%d %d",&n1,&n2);
    for(i=0;i<=n1-1;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=n2-1;i++)
    scanf("%d",&b[i]);
    bubble(a,n1);
    bubble(b,n2);
    print1(a,n1);
    print2(b,n2);
}
void bubble(int *a,const int n)
{
     int pass,i;
     void swap(int*,int*);
     for(pass=1;pass<=n-1;pass++)
     for(i=0;i<=n-2;i++)
     if(a[i]>=a[i+1])
     swap(&a[i],&a[i+1]);
}
void swap(int *a,int *b)
{
         int hold;
         hold=*a;
         *a=*b;
         *b=hold;
}
void print1(int *a,int n)
{
     int i;
     for(i=0;i<=n-1;i++)
     {
                        printf("%d",a[i]);
                        printf(" ");
     }
}
void print2(int *a,int n)
{
     int i;
     for(i=0;i<=n-2;i++)
     {
                        printf("%d",a[i]);
                        printf(" ");
     }
     printf("%d",a[n-1]);
}
     
     
         
         
    
