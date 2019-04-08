int main()
{
    int a[16];
    int i,j,num;
    while(1)
    {
        for(i=0;i<16;i++)
        {
	   cin>>a[i];
            if(a[0]==-1)
                return 0;
            if(a[i]==0)
                break;
        }
        num=0;
        for(i=0;a[i];i++)
            for(j=0;a[j];j++)
                if(a[i]==2*(a[j]))
                    num++;
		cout<<num<<endl;
    }
    return 0;
}