//***********************************************************************
//??????? 
//??????? 
//??????
//***********************************************************************
void in(int n, int a[]);                    //??void??
void arrange(int n, int a[]); 
void connect(int n1, int n2, int a[], int b[], int c[]); 
void out(int n, int c[]); 
int main()                                  //??? 
{
    int n1, n2, a[1000], b[1000], c[2000];
    cin>>n1>>n2; 
    in(n1, a);                              //???? 
    in(n2, b);
    arrange(n1, a);
    arrange(n2, b);
    connect(n1, n2, a, b, c);
    out(n1 + n2, c); 
    return 0;
}                                            //?????
void in(int n, int a[])                     //???????? 
{
    for(int i = 0; i < n; i++)
            cin>>a[i]; 
}
void arrange(int n, int a[])                //????????? 
{
    int temp; 
    for(int i = 0; i < n; i++)
            for(int j = 0; j < n - i - 1; j++)
                    if(a[j] > a[j + 1])
                    {
                            temp = a[j];
                            a[j] = a[j + 1];
                            a[j + 1] = temp;
                    }
}
                                            //???????? 
void connect(int n1, int n2, int a[], int b[], int c[])
{
    int l = 0;
    for(int i = 0; i < n1; i++, l++)
            c[l] = a[i];
    for(int j = 0; j < n2; j++, l++)
            c[l] = b[j]; 
} 
void out(int n, int c[])                   //???????? 
{
     for(int i = 0; i < n - 1; i++)
             cout<<c[i]<<" ";
     cout<<c[n - 1]<<endl;
} 
