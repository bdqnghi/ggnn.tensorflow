

int main()
{
    char a[100];
    memset(a,0,sizeof a);

    cin.getline(a,100);
    int i,num=0;

    for(i=0;;i++)
    {
        if((a[i]>='0'&&a[i]<='9')&&(a[i+1]>='0'&&a[i+1]<='9'))
        {
            cout<<a[i];
        }
       if((a[i]>='0'&&a[i]<='9')&&(a[i+1]<'0'||a[i+1]>'9')) cout<<a[i]<<endl;
        if(a[i]==0) break;
    }




    return 0;
}
