//???????????? 

int n;                                                    //???????
char a[110][110][2]={0};                                //????????? 

void cz (int k)
{
     if (k!=1)
     {
        for (int j=1;j<=n;j++)
        {
            for (int k=1;k<=n;k++)
            {
                if (a[j][k][0]==0||a[j][k][0]==2)         //???????? 
                a[j][k][1]=a[j][k][0]; 
                else
                {
                    if (a[j+1][k][0]==2||a[j-1][k][0]==2||a[j][k+1][0]==2||a[j][k-1][0]==2)   //???????????? 
                    a[j][k][1]=2;
                    else
                    a[j][k][1]=1;
                }
            }
        }
        for (int j=1;j<=n;j++)
        {
            for (int k=1;k<=n;k++)
            a[j][k][0]=a[j][k][1]; 
        }
        cz(k-1);
    } 
}


int main ()
{
    int m;                                                    //???? 
    int ans=0;                                                //???? 
    cin >>n;                                                  //??????? 
    for (int i=1;i<=n;i++)                                    //?????????????????0???2???1 
    {
        for (int j=1;j<=n;j++)
        {
            cin >>a[i][j][0];
            if (a[i][j][0]=='#')
            a[i][j][0]=0;
            if (a[i][j][0]=='.')
            a[i][j][0]=1;
            if (a[i][j][0]=='@')
            a[i][j][0]=2;
        }
    }
    cin >>m;                                                  //???? 
    cz (m);
    for (int i=1;i<=n;i++)                                    //?????????? 
    {
        for (int j=1;j<=n;j++)
        {
            if (a[i][j][0]==2)
            ans++; 
        }
    }
    cout <<ans;                                               //?????? 
    return 0;
}
