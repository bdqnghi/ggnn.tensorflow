/***************************??2?N??**********************
??
??????????N(N<=100)???2?N?????
????
??????????N?
????
??2?N?????
????
5
????
32
??
?????
***********************************************************
programmer Qiu HEzi
version 1.0
creat time 2012.12.21 1:14
***********************************************************/
void c (char *temp , int num)
{
    *temp = '0' +num;
}
int fun (char a[110] , int w)
{
    int plu =0 ; //????????1
    for (int i=0 ; i<w ; i++)
    {
        int temp = (a[i]-'0')*2 +plu;
        if (temp>=10)
        {
            plu=1;
            temp-=10;
        }
        else
            plu=0;
        a[i]=temp+'0';
    }
    if (plu==1)
    {
        w++;
        a[w-1]='1';
    }
    return w;
}
int main()
{
    int n;
    cin>>n;
    char a[110]={0};
    a[0]='1';
    int w=1 ;//???????
    for (int i=0 ; i<n ; i++)
        w = fun (a , w);
    for (int i=w-1 ; i>=0 ; i--)
        cout<<a[i];
    return 0;
}
