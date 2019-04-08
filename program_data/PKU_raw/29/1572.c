

int main()
{
    int m,max=0;
    cin>>m;
    int a[1000],c[1000]; //c????????,a?????
    double b[1000]; //b?????

    for (int i=0;i<m;i++)
    {
        cin>>a[i];
        if (a[i]>max) max=a[i];   //max??????????
    }
    c[1]=1; c[2]=2;
    b[0]=0;
    for (int i=3;i<=max+2;i++) c[i]=c[i-1]+c[i-2];
//????????
    for (int i=1;i<=max+2;i++) b[i]=b[i-1]+(float)c[i+1]/c[i]; 
//????????????

    for (int i=0;i<m;i++) printf("%.3f\n",b[a[i]]);

    return 0;
}
