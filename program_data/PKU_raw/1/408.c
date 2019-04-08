int yinshu(int be,int by)//??????? 
{
    int i,sum=0;
    for(i=by;i*i<=be;i++)
    {
                       if(be%i==0)
                       {
                                  sum=sum+1+yinshu(be/i,i);
                       }//be?i?????????????????be/i 
    } 
    return sum;
} 
int main()
{
    int n;
    cin>>n;//?? 
    while(n--)//??? 
    {
                    int num,sign;//sign?????? 
                    cin>>num;
                    for(int j=num;j>1;j--)
                    {
                            if(num%j==0)
                            sign=j;
                    }//?????? 
                    cout<<yinshu(num,sign)+1<<endl;//???? 
    }
    return 0;
}


