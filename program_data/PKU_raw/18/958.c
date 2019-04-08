int main ()
{
    int m,n,s=0;
    int a[200][200];
    int (*p)[200]=a;
    cin>>n;
    m=n;
    for (int q=0;q<m;q++)
    {
        s=0;
        n=m;
        for(int i=0;i<m;i++)///shuru
            for (int j=0;j<m;j++)
                cin>>*(*(p+i)+j);
        for (int w=0;w<m-1;w++)
        {
            for (int i=0;i<n;i++)///hangxiaojian
            {
                int l=*(*(p+i));
                for (int j=0;j<n;j++)
                    if (l>*(*(p+i)+j))l=*(*(p+i)+j);
                for (int j=0;j<n;j++)
                    *(*(p+i)+j)=*(*(p+i)+j)-l;
            }
            for (int j=0;j<n;j++)///liexiaojian
            {
                int l=*(*(p)+j);
                for (int i=0;i<n;i++)
                    if (l>*(*(p+i)+j))l=*(*(p+i)+j);
                for (int i=0;i<n;i++)
                    *(*(p+i)+j)=*(*(p+i)+j)-l;
            }
            s=s+*(*(p+1)+1);
            for (int i=0;i<n;i++)
                for (int j=1;j<n-1;j++)
                    *(*(p+i)+j)=*(*(p+i)+j+1);
            for (int j=0;j<n-1;j++)
                for (int i=1;i<n-1;i++)
                    *(*(p+i)+j)=*(*(p+i+1)+j);
            n--;
        }
        cout <<s<<endl;
    }
    return (0);
}
