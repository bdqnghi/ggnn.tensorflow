
int main()
{
    char num[110];                        //??????????
    int N,i,j,s=1,temp,n=1,add[110];
    memset(num,'\0',sizeof(num));
    num[0]='1';
    cin>>N;
    for (i=0;i<N;i++)                     //??N?2??
    {
        memset(add,0,sizeof(add));
        for (j=0;j<n;j++)                 //???????2
        {
            temp=(num[j]-'0')*2;
            num[j]=temp%10+'0';
            if (temp>=10)
            {
                add[j+1]=1;
                if (num[j+1]=='\0')
                {
                    s++;
                    num[j+1]='1';
                }

            }
        }
        for (j=0;j<n;j++)                  //??
            num[j]+=add[j];
        n=s;
    }
    for (i=s-1;i>=0;i--)                   //??
    {
		temp=num[i]-'0';
        cout<<temp;
    }
    return 0;
}