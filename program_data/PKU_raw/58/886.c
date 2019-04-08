int main()
{
    int i;
    int judge(char a[]); //???????????????
    int n;
    int b[100];
    cin>>n;
    cin.get(); //???????
    for(int j=1;j<=n;j++) //??n????
    {
       char a[85];
       for(i=0;i<85;i++) a[i]=0;

       cin.getline(a,85);
       b[j]=judge(a); //??????????????b

       for(i=0;i<85;i++) a[i]=0; //???????

    }
    for(i=1;i<=n;i++) cout<<b[i]<<endl; //???????

    return 0;

}
int judge(char a[]) //???????????????
{
    int i;
    for(i=0;i<85;i++) //??????????
    {
        if(a[i]==' ')
        {
            return 0;
            break;
        }
    }
    if(((int)a[0]>=97&&(int)a[0]<=122)||((int)a[0]>=65&&(int)a[0]<=90)||(int)a[0]==95)
    {
        for(i=1;i<85;i++)
        {
            if(((int)a[i]>=1&&(int)a[i]<=47)||((int)a[i]>=58&&(int)a[i]<=64)||((int)a[i]>=91&&(int)a[i]<=94)||(int)a[i]==96||(int)a[i]>=123)
            {
                return 0;
                break;
            }

        }
        if(i==85) return 1;
    }
    else return 0;
}


