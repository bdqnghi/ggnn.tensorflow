/* Name      : ????? 
 * Version   : 1.0
 * Date      : 2012-11-18
 * New       : Null
 * Func&Feat : 
 * State     : Design
 */
void readin(int ma,int mb,int a[],int b[])
{
    for(int i=0;i<ma;i++)cin>>a[i];
    for(int i=0;i<mb;i++)cin>>b[i];
}
void rearange(int ma,int mb,int a[100],int b[100])
{
    int temp;
    for(int i=0;i<ma;i++)
        for(int j=0;j<ma-1;j++)
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    for(int i=0;i<mb;i++)
        for(int j=0;j<mb-1;j++)
            if(b[j]>b[j+1])
            {
                int temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
}
int printout(int ma,int mb,int a[],int b[])
{
    for(int i=0;i<ma;i++)cout<<a[i]<<' ';
    for(int i=0;i<mb-1;i++)cout<<b[i]<<' ';
    cout<<b[mb-1];
}
int main()
{
    int ma[1],mb[1],a[100]={0},b[100]={0},c[100]={0};
    readin(1,1,ma,mb);
    readin(ma[0],mb[0],a,b);
    rearange(ma[0],mb[0],a,b);
    printout(ma[0],mb[0],a,b);
    return 0;
}
