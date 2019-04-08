

int main()
{
   int n,m;
   int i=0;
   int k;
   cin>>n;
   int a[60];
   for(i=0;i<n;i++)
    {
        cin>>m;
        if(m==0)
            cout<<60<<endl;
        else
        {

        {
            for(k=0;k<m;k++)
                cin>>a[k];
        }
        if((a[m-1]+(m-1)*3)<=57)
            cout<<60-m*3<<endl;


        for(k=0;k<m;k++)
        {
            if(a[k]+k*3>=57&&a[k]+k*3<=60)
                {
                    cout<<a[k]<<endl;

                    break;
                }
             if((a[k]+k*3)>60)
             {

                 cout<<60-k*3<<endl;
                 break;
             }
        }
        }
    }


    return 0;
}