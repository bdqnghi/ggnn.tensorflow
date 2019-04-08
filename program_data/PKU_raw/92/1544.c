
int compare(const void* p1,const void*p2)
{
    return (*((int*)p2)-*((int *)p1));
}

int g(int a,int b)
{
    if(a>b)
    return 200;
    else if(a==b)
    return 0;
    else
      return -200;
}

int main()
{
    int n,i,j,tian[1000],qi[1000],re[1001][1001];
    cin>>n;
    while(n!=0)
    {
        if(n==1)
        {
            cin>>tian[0]>>qi[0];
            cout<<g(tian[0],qi[0])<<endl;
        }
        else
        {
        //int *tian=new int[n];
        //int *qi=new int[n];
        for(i=0;i<n;i++)
           cin>>tian[i];
        for(i=0;i<n;i++)
           cin>>qi[i];
        qsort(tian,n,sizeof(int),compare);
        qsort(qi,n,sizeof(int),compare);

       // for(i=0;i<n;i++)
         // cout<<tian[i]<<" "<<qi[i]<<endl;

       // int** re=new int*[n+1];
       // for(i=0;i<n+1;i++)
         //   re[i]=new int[n+1];

        re[1][0]=g(tian[n-1],qi[0]);
        re[1][1]=g(tian[0],qi[0]);
        for(i=2;i<n+1;i++)
        {
            re[i][0]=re[i-1][0]+g(tian[n-i],qi[i-1]);
            for(j=1;j<i;j++)
            {
                if(re[i-1][j-1]+g(tian[j-1],qi[i-1])>re[i-1][j]+g(tian[n-i+j],qi[i-1]))
                    re[i][j]=re[i-1][j-1]+g(tian[j-1],qi[i-1]);
                else
                    re[i][j]=re[i-1][j]+g(tian[n-i+j],qi[i-1]);
            }
            re[i][i]=re[i-1][j-1]+g(tian[i-1],qi[i-1]);
        }

       /* for(i=1;i<n+1;i++)
         for(j=0;j<i+1;j++)
           cout<<re[i][j]<<" ";
           cout<<endl;*/

        for(i=1;i<n+1;i++)
        {
            if(re[n][i]>re[n][0])
              re[n][0]=re[n][i];
        }
        cout<<re[n][0]<<endl;
        //delete []tian;
        //delete []qi;
        //for(i=0;i<n+1;i++)
        //delete []re[i];
        //delete []re;
        }
        cin>>n;
    }
    return 0;
}
