int main ()
{
    int n,a[1000],c[5]={0};                            //?? 
    double b[5]={0}; 
    cin >>n;                                          //?? 
    for (int i=1;i<=n;i++)
    cin >>a[i];
    for (int i=1;i<=n;i++)                             //?? 
    {
        if (a[i]<=18)
        c[1]++;
        else
        {
            if (a[i]<=35)
            c[2]++;
            else
            {
                if (a[i]<=60)
                c[3]++;
                else
                c[4]++;
            }
        }
    }
    for (int i=1;i<=4;i++)                               //?? 
    b[i]=100*(double)c[i]/n;
    cout <<fixed<<setprecision(2)<<"1-18: "<<b[1]<<"%"<<endl; //?? 
    cout <<fixed<<setprecision(2)<<"19-35: "<<b[2]<<"%"<<endl;
    cout <<fixed<<setprecision(2)<<"36-60: "<<b[3]<<"%"<<endl;
    cout <<fixed<<setprecision(2)<<"60??: "<<b[4]<<"%"<<endl;
    return 0;
}
