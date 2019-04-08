int main()
{
    int A[5],B[5],C[5],D[5],E[3]={1,4,5};
    int i,j,k,l,m,i1,j1,k1,l1,m1;
    for(i=0;i<=4;i++)
    {
        A[i]=i+1;
        if(i==4) 
        k1 = 1;
        else
        k1 = 0;
        {
            for(j=0;j<=4;j++)
            {
                B[j]=j+1;
                if(A[i]==B[j])
                {
                    continue;
                }
                if(j==1)
                j1 = 1;
                else
                j1 = 0;
                for(k=0;k<=4;k++)
                {
                    C[k]=k+1;
                    if(A[i]==C[k]||B[j]==C[k])
                    {
                        continue;
                    }
                    if(k!=0)
                    l1 = 1;
                    else
                    l1 = 0;
                    for(l=0;l<=4;l++)
                    {
                        D[l]=l+1;
                        if(A[i]==D[l]||B[j]==D[l]||C[k]==D[l])
                        {
                            continue;
                        }
                        if(l==0)
                        m1 = 1;
                        else
                        m1 = 0;
                        for(m=0;m<=2;m++)
                        {
                            if(A[i]==E[m]||B[j]==E[m]||C[k]==E[m]||D[l]==E[m])
                            {
                                continue;
                            }
                            i1 + j1 + l1 + m1 + k1 == 2;
                            if(A[i]==5&&B[j]==2&&C[k]==1&&D[l]==3&&E[m]==4)
                            {
                            cout << A[i] << " " << B[j] << " " << C[k] << " " << D[l] << " " << E[m] <<endl;
                            break;
                            }
                        }
                    }
                }
            }
        }
    }
                            return 0;    
}
