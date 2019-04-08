int main ()
{
    int n=0;
    cin>>n;                         //???? 
    for (int i=0;i<10;i++)        
    {
        if (n>=100) n=n-100;        //??100??? ??????100???100????????100 
        else
        {
            cout<<i<<endl;
            break;
            
        }
    }
    for (int i=0;i<3;i++)
    {
        if (n>=50) n=n-50;         //??50?????? 
        else
        {
            cout<<i<<endl;
            break;
            
        }
    }
    for (int i=0;i<3;i++)
    {
        if (n>=20) n=n-20;        //??20???
        else
        {
            cout<<i<<endl;
            break;
            
        }
    }
    for (int i=0;i<3;i++)
    {
        if (n>=10) n=n-10;          //??10???
        else
        {
            cout<<i<<endl;
            break;
            
        }
    }
    for (int i=0;i<3;i++)
    {
        if (n>=5) n=n-5;           //??5???
        else
        {
            cout<<i<<endl;
            break;
            
        }
    }
    for (int i=0;i<10;i++)
    {
        if (n>=1) n=n-1;           //??1???
        else
        {
            cout<<i<<endl;
            break;
            
        }
    }

    return 0;
} 
