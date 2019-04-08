int main()
{
    char a[101];
    char b[101];
    int flag[101];
    int i,j,len,count,sign;

    while(1)
    {
        sign=0;
        i=-1;
        do
        {
            i++;
            if(cin.get(a[i]))   sign=1;
        }while(a[i]!='\n');
        if(sign==0) break;
        a[i]=0;len=i;                   //i???a???
        memset(b,' ',sizeof(b));
        b[i]=0;
        memset(flag,0,sizeof(flag));//?????

        for(i=0;i<len;i++)
        {
            if(a[i]=='(')           //???????????
            {
                j=i+1;count=0;
                while(j<len)
                {
                    if(a[j]=='(')count++;
                    else if(a[j]==')')
                    {
                        if(count==0){flag[i]=1;flag[j]=1;break;}//???????
                        else    count--;
                    }
                    j++;
                }
                if(flag[i]==0)  b[i]='$';
            }
            else  if((a[i]==')')&&(flag[i]==0)) b[i]='?';//???????????????????
        }
        cout<<a<<endl;
        cout<<b<<endl;
    }
}
