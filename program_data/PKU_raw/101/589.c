int main ()
{
    int i,j,k,l,m,n;
    int a[3];
    int c[3];
    char b[3]={'A','B','C'};
    for (i=0;i<3;i++)
    {
        a[0]=i;

        for (j=0;j<3;j++)
        {
            a[1]=j;if (a[0]==a[1])continue;
            for (k=0;k<3;k++)
            {
                a[2]=k;if (a[2]==a[1]||a[2]==a[0])continue;
                c[0]=(a[1]>a[0])+(a[0]==a[2]);
                c[1]=(a[0]>a[1])+(a[0]>a[2]);
                c[2]=(a[2]>a[1])+(a[1]>a[0]);
                if (a[0]<a[1]&&c[0]>c[1])
                {
                    if (a[1]<a[2]&&c[1]>c[2])
                    cout <<b[0] <<b[1] <<b[2] <<endl;
                }
                if (a[0]<a[2]&&c[0]>c[2])
                {
                    if (a[2]<a[1]&&c[2]>c[1])
                    cout <<b[0] <<b[2] <<b[1] <<endl;
                }
                if (a[1]<a[0]&&c[1]>c[0])
                {
                    if (a[0]<a[2]&&c[0]>c[2])
                    cout <<b[1] <<b[0] <<b[2] <<endl;
                }
                if (a[1]<a[2]&&c[1]>c[2])
                {
                    if (a[2]<a[0]&&c[2]>c[0])
                    cout <<b[1] <<b[2] <<b[0] <<endl;
                }
                if (a[2]<a[0]&&c[2]>c[0])
                {
                    if (a[0]<a[1]&&c[0]>c[1])
                    cout <<b[2] <<b[0] <<b[1] <<endl;
                }
                if (a[2]<a[1]&&c[2]>c[1])
                {
                    if (a[1]<a[0]&&c[1]>c[0])
                    cout <<b[2] <<b[1] <<b[0] <<endl;
                }

            }
        }
    }
    return (0);
}
