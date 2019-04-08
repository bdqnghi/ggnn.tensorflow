int main ()
{
    int a[1000],n;               //?? 
    int b[1000],m=0;
    int f;
    cin >>n;                     //?? ???? 
    for (int i=1;i<=n;i++)
    {
        cin >>a[i];
        if (a[i]%2==1)
        {
           m++;
           b[m]=a[i];
        }
    }
    for (int i=1;i<=1000;i++)    //?? 
    {
        for (int j=1;j<m;j++)
        {
            if (b[j]>b[j+1])
            {
               f=b[j];
               b[j]=b[j+1];
               b[j+1]=f;
            }
        }
    }
    for (int i=1;i<=m;i++)       //?? 
    {
        cout <<b[i];
        if (i==m)
        break;
        cout <<",";
    }
    return 0;
}
    
