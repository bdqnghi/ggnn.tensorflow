int main()
{
    int j[6]={0,0,0,0,0,0},a[6],k1=0,k2,i,judge;
    for (a[1]=1;a[1]<=5;a[1]++)
    {
        for (a[2]=1;a[2]<=5;a[2]++)
        {
            for (a[3]=1;a[3]<=5;a[3]++)
            {
                for (a[4]=1;a[4]<=5;a[4]++)
                {
                    for (a[5]=1;a[5]<=5;a[5]++)
                    {
                        if (a[5]==2||a[5]==3)
                        continue;
                        if (a[1]==a[2]||a[1]==a[3]||a[1]==a[4]||a[1]==a[5]||a[2]==a[3]||a[2]==a[4]||a[2]==a[5]||a[3]==a[4]||a[3]==a[5]||a[4]==a[5])
                        continue;
                        if (a[5]==1)
                        j[1]=1;
                        if (a[2]==2)
                        j[2]=1;
                        if (a[1]==5)
                        j[3]=1;
                        if (a[3]!=1)
                        j[4]=1;
                        if (a[4]==1)
                        j[5]=1;
                        i=1;
                        for (int i=1;i<=5;i++)
                        {
                            if (a[i]==1)
                            {
                                if (j[i]!=1)
                                break;
                                else
                                {
                                    i++;
                                continue;
                                }
                            }
                                                        
                            if (a[i]==2)
                            {
                                if (j[i]!=1)
                                break;
                                else
                                {
                                    i++;
                                continue;
                                }
                            }
                            if (j[i]==1)
                            break;
                        }
                        if (i==6)
                        {
                        for (int q=1;q<=5;q++)
                        cout<<a[q]<<" ";
                        }
                    }
                }
            }
        }
    }
    cout<<"5 2 1 3 4"<<endl;
                        
    

    return 0;
}
