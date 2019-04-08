/* Name        : ???????????
 * Version     : 1.0
 * Date        : 2013-01-12
 * New         : 
 * Description : 
 * State       : Design
 */
int R(int Y)
{
    return Y/4-Y/100+Y/400;
}
int RY(int Y)
{
    if ((Y%4==0 && Y%100!=0) || (Y%400==0)) return 1;
    else return 0;
}
int RM(int M,int Y)
{
    switch (M)
    {
        case  1:return 0;
        case  2:return 1;
        case  3:return -1+RY(Y);
        case  4:return 0+RY(Y);
        case  5:return 0+RY(Y);
        case  6:return 1+RY(Y);
        case  7:return 1+RY(Y);
        case  8:return 2+RY(Y);
        case  9:return 3+RY(Y);
        case 10:return 3+RY(Y);
        case 11:return 4+RY(Y);
        case 12:return 4+RY(Y);
    }
}
int main()
{
    int Ya,Yb,Ma,Mb,Da,Db;
    int Sa,Sb;
    cin>>Ya>>Ma>>Da;
    cin>>Yb>>Mb>>Db;
    Sa=365*(Ya-1)+30*(Ma-1)+Da+R(Ya-1)+RM(Ma,Ya);
    Sb=365*(Yb-1)+30*(Mb-1)+Db+R(Yb-1)+RM(Mb,Yb);
    cout<<Sb-Sa;
    return 0;
}
