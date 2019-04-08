/*
 *????weight.cpp
 *??????
 *?????2012-10-15
 *??????
 */



int main()
{
    int i,j,t,z=0,q=1,s=2,l=3,a[4],w[4]; // ???? a[]???? w[]????
    char ch,name[]={'z','q','s','l'};
    for (w[z]=10;w[z]<=50;w[z]+=10) // ????
        for (w[q]=10;w[q]<=50;w[q]+=10)
            for (w[s]=10;w[s]<=50;w[s]+=10)
                for (w[l]=10;w[l]<=50;w[l]+=10)
                    if (w[z]+w[q]==w[s]+w[l] && w[z]+w[l]>w[s]+w[q] && w[z]+w[s]<w[q]) // ??
                    {
                        a[z]=(w[z]<w[q])+(w[z]<w[s])+(w[z]<w[l]); // ????
                        a[q]=(w[q]<w[z])+(w[q]<w[s])+(w[q]<w[l]);
                        a[s]=(w[s]<w[z])+(w[s]<w[q])+(w[s]<w[l]);
                        a[l]=(w[l]<w[z])+(w[l]<w[q])+(w[l]<w[s]);
                        for (i=0;i<4;i++) // ??
                            for (j=i+1;j<4;j++)
                                if (a[i]>a[j])
                                {
                                    t=a[i];a[i]=a[j];a[j]=t; // ??
                                    t=w[i];w[i]=w[j];w[j]=t;
                                    ch=name[i];name[i]=name[j];name[j]=ch;
                                }
                        for (i=0;i<4;i++) // ??
                            cout << name[i] << ' ' << w[i] << endl;
                        return 0;
                    }
    return 0;
}