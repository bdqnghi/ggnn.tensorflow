int main()
{
    int count=0,i,j,b[1000]={0};
    char a[1000][130],c;
    c=getchar();
    while(c>96&&c<123||c>64&&c<91)
    {
              while(c>96&&c<123||c>64&&c<91)
              {
                            a[count][b[count]]=c;
                            b[count]++;
                            c=getchar();
              }
              while(c==' ') c=getchar();
              count++;
    }     //??????,??????a 
    for (i=count-1;i>0;i--)
    {
        for (j=0;j<b[i];j++)
        {
            cout<<a[i][j];
        }
        cout<<' ';
    }
    for (j=0;j<b[0];j++) cout<<a[0][j]; //???? 
    return 0;
}
