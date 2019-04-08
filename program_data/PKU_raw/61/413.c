int a[100];
int F(int n)
    { if(n==1||n==2)return 1;
     else return F(n-1)+F(n-2);
     }
int main()
{ int n;
 cin>>n;
 for(int i=0;i<n;i++)
    {
    cin>>a[i];
    }
 for(int j=0;j<n;j++)
    {cout<<F(a[j])<<endl;
    }
 return 0;
}
