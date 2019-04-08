/* Name        : ?????
 * Version     : 1.0
 * Date        : 2013-01-12
 * New         : 
 * Description : 
 * State       : Design
 */
int main()
{
    int N=0;
    double Num[300]={0},Diff[300]={0},Extre[300]={0};
    double Average=0,Sum=0;
    double Max=0;
    cin>>N;
    for (int i=0;i<N;i++)
    {
        cin>>Num[i];
        Sum+=Num[i];
    }
    Average=Sum/(double)N;
    for (int i=0;i<N;i++)
    {
        Diff[i]=Num[i]-Average;
        if (Diff[i]<0) Diff[i]=-Diff[i];
        if (Max<Diff[i]) Max=Diff[i];
    }
    int K=0;
    for (int i=0;i<N;i++)
        if (Diff[i]==Max)
        {
            Extre[K]=Num[i];
            K++;
        }
    for (int i=0;i<K;i++)
        for (int k=0;k<K-1;k++)
            if (Extre[k]>Extre[k+1])
            {
                double temp=Extre[k];
                Extre[k]=Extre[k+1];
                Extre[k+1]=temp;
            }
    cout<<Extre[0];
    for (int i=1;i<K;i++) cout<<','<<Extre[i];
    return 0;
}
