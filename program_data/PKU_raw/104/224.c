int ln(int a)
{
    int b=0;
    for(b=0;b<11;b++)
    {
        if(pow((float)2,(float)b)>a)
        break;
    }
    return (b);
}

int main()
{
    int a,b,i;
    int a1,b1;
    cin>>a>>b;
    a1=ln(a);
    b1=ln(b);
    int num_1[a1];
    int num_2[b1];
    int j=0;
    num_1[0]=a;
    num_2[0]=b;
    for(i=1;i<a1;i++)
    {
         num_1[i]=num_1[i-1]/2;
    }
    for(i=1;i<b1;i++)
    {
         num_2[i]=num_2[i-1]/2;
    }
    for(i=0;i<a1;i++)
    {
        for(int k=0;k<b1;k++)
        {
                if(num_1[i]==num_2[k])
                j++;
        }
    }
    cout<<num_1[a1-j]<<endl;
    return 0;
}
