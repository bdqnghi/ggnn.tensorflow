//???????????????????????? ??? 1200012848 20121116

//??
int A[100];
int An;
int B[100];
int Bn;

void getAn()    //?????????
{
    cin>>An;
}

void getBn()    //?????????
{
    cin>>Bn;
}

void sortA()   //????An??
{
    for(int i=0;i<An;i++)
    {
        cin>>A[i];
    }

    sort(A,A+An);
}

void sortB()   //????Bn??
{
    for(int i=0;i<Bn;i++)
    {
        cin>>B[i];
    }

    sort(B,B+Bn);
}

void OutA()
{
    for(int i=0;i<An;i++)
    {
        cout<<A[i]<<" ";
    }
}

void OutB()
{
    for(int i=0;i<Bn;i++)
    {
        cout<<B[i];
        if(i!=Bn-1) cout<<' ';
    }
}

int main()
{
    getAn();
    getBn();
    sortA();
    sortB();
    OutA();
    OutB();
    return 0;
}
