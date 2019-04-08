//============================================================================
// Name        : shj.cpp
// Author      : ???
// Time        : 2013.12.13
// Description : ????
//============================================================================
void quanganran(char [100][100],int );
void yiganran(char [100][100],int ,int ,int);
int main()
{
    char a[100][100];
    int n;
    cin >> n;
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> a[i][j];
    
    int time;
    cin >> time;
    while(time-- -1)
    {
        quanganran(a,n);
    }
    int sum=0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i][j]=='@')
                sum++;
    cout << sum << endl;
    return 0;
}
void quanganran(char a[100][100],int n)
{
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i][j]=='@')
                yiganran(a,n,i,j);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i][j]=='a')
                a[i][j]='@';
    
}
void yiganran(char a[100][100],int n,int i,int j)
{
    if(j>0 && a[i][j-1] !='#' && a[i][j-1]!= '@')
        a[i][j-1]='a';
    if(j<n-1 && a[i][j+1] != '#' && a[i][j+1]!= '@')
        a[i][j+1]='a';
    if(i>0 && a[i-1][j] != '#' && a[i-1][j]!= '@')
        a[i-1][j]='a';
    if(i<n-1 && a[i+1][j] != '#' && a[i+1][j]!= '@')
        a[i+1][j]='a';
}
