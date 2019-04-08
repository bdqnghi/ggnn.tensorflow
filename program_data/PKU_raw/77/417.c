// ?????? ???1000010500 
// ???? 
// 2010-12-31

void print(int n,char xulie[],int m,int f)
{
    int i,j;
    for (i = 0;i <= n;i++)
        if (xulie[i] == m)
            for (j = i + 1;j <= n;j++)
            { 
                if (xulie[j] == '0')               // ????????? 
                   continue;
                else if (xulie[j] == f)
                {
                    xulie[i] = '0';                // ?????????'0' 
                    xulie[j] = '0';
                    cout << i << " " << j << endl; // ?????? 
                    print(n,xulie,m,f);            // ???? 
                }
                else
                    break;
            }
    return;
}   
int main()
{
    char xulie[100],m,f;                   // m??????f????? 
    int len;
    cin.getline(xulie,101);
    len = strlen(xulie);                   // ????? 
    m = xulie[0];
    f = xulie[len - 1];
    print(len - 1,xulie,m,f);
    return 0;
}
    
