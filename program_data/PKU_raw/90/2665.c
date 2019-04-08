int f[11][11];
//stiring?
int PutApple(int m,int n)
{
    if(f[m][n])
        return f[m][n];
    else if(m==1||n==1)
    {
        f[m][n]=1;
        return f[m][n];
    }
    else if(m<n)
    {
        f[m][n]=PutApple(m,m);
        return f[m][n];
    }
    else if(m==n)
    {
        f[m][n]=1+PutApple(m,m-1);
        return f[m][n];
    }
    else
    {
        f[m][n]=PutApple(m-n,n)+PutApple(m,n-1);
        return f[m][n];
    }
}
 
int main()
{
    int n;
    cin>>n;
    int l,m;
	int A[100];
    for (int i=0;i<n;++i)
    {
        memset(f,0,sizeof(f));
        cin>>l>>m;
        A[i]=PutApple(l,m);
    }
    for (int i=0;i<n;++i)
    {
		cout<<A[i]<<endl;
	}
    return 0;
}

 