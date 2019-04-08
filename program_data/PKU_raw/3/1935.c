/*
Name:???
ID:1200012842
Email:443972553@qq.com
*/
int main()
{
    int n,k;
    cin>>n>>k;
    int data[1001];
    for (int i=0;i<n;i++)
        cin>>data[i];
    for (int i=0;i<n;i++)
        for (int j=0;j<i;j++)
            if (data[i]+data[j]==k)
            {
               cout<<"yes"<<endl;
               return 0;                       
               }
    cout<<"no"<<endl;
    return 0;
    
    }
