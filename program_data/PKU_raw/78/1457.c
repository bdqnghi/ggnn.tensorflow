int main()
{
    int z0=1,q0=1,s0=1,l0=1,t=0,k=0,c=0,z1,q1,s1,l1,a[4][2];
    char b[4];
    char z,q,s,l;
    for(z0=1;z0<=5;z0++)
    {
        for(q0=1;q0<=5;q0++)
        {
            for(s0=1;s0<=5;s0++)
            {
                for(l0=1;l0<=5;l0++)
                {
                    if((z0+q0)==(s0+l0)) t=1;
                    else continue;
                    if((z0+l0)>(s0+q0)) k=1;
                    else continue;
                    if((z0+s0)<q0) c=1;
                    else continue;
                    if(t*k*c==1) 
                    {
                        z1=10*z0;
                        q1=10*q0;
                        s1=10*s0;
                        l1=10*l0;
                        break;
                    }
                }
            }
        }
    }
    a[0][0]=z1;
    a[0][1]='z';
    a[1][0]=q1;
    a[1][1]='q';
    a[2][0]=s1;
    a[2][1]='s';
    a[3][0]=l1;
    a[3][1]='l';
    for(int i=0;i<4;i++)
    {
        for(int j=i;j<4;j++)
        {
            if(a[i][0]<a[j][0])
            {
               swap(a[i][0],a[j][0]);
               swap(a[i][1],a[j][1]);
            }
        }
    }
   for(int k=0;k<4;k++)
   {
        b[k]=a[k][1];
        cout<<b[k]<<" "<<a[k][0]<<endl;
    }
    return 0;
}
    
    
