int a[200][200];
int minhang(int hang,int geshu)
{
    int i;
    
    int min=*(*(a+hang)+1);
    for(i=1;i<=geshu;i++)
    {
        if(*(*(a+hang)+i)<min) min=*(*(a+hang)+i);
    }
    return min;
}
int minlie(int lie,int geshu)
{
    int i;
    int min=*(*(a+1)+lie);
    for(i=1;i<=geshu;i++)
    {
        if(*(*(a+i)+lie)<min) min=*(*(a+i)+lie);
    }
    return min;
}
int main()
{


    int n,x,i,j;
    cin>>n;

    for(x=1;x<=n;x++)
    {
        
        memset(a,0,sizeof a);

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++) cin>>*(*(a+i)+j);

        }
        int sum=0;
        for(int m=0;m<n-1;m++)
        {
            for(int mm=1;mm<=n-m;mm++)
            {
                int Minhang=minhang(mm,n-m);
                for(i=1;i<=n-m;i++)
                *(*(a+mm)+i)=*(*(a+mm)+i)-Minhang;
                
            }
            for(int mm=1;mm<=n-m;mm++)
            {
                int Minlie=minlie(mm,n-m);
                for(i=1;i<=n-m;i++)
                *(*(a+i)+mm)=*(*(a+i)+mm)-Minlie;
                
            }


            sum+=*(*(a+2)+2);
            for(int ii=1;ii<=n-m;ii++)
            {
                for(i=3;i<=n-m;i++)
                *(*(a+ii)+i-1)=*(*(a+ii)+i);
                
            }
            for(int ii=1;ii<=n-m;ii++)
            {
                for(i=3;i<=n-m;i++)
                *(*(a+i-1)+ii)=*(*(a+i)+ii);
                
            }

        }
        cout<<sum<<endl;




    }



    return 0;


}
