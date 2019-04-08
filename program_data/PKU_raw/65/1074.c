
int main()
{int n;
cin>>n;
int i,a,b,ca=0,cb=0;
for(i=0;i<n;i++)
{
                cin>>a>>b;
          
               if(a==0&&b==1)
               ca++;
                else if(a==1&&b==2)
                ca++;
                else if(a==2&&b==0)
            ca++;
                 else if(b==0&&a==1)
               cb++;
                else if(b==1&&a==2)
                  cb++;
                else if(b==2&&a==0)
                 cb++;
                }
if(ca>cb)
cout<<"A";
if(ca==cb)
cout<<"Tie";
if(cb>ca)
cout<<"B";

    return 0;
}
