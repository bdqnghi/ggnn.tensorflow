int yinshu(int be,int by)
{
    int i,sum=0;//cout<<be<<' '<<by<<endl;
    for(i=by;i*i<=be;i++)
    {
                       if(be%i==0){sum+=1+yinshu(be/i,i);}
    } 
    return sum;
} 
int main()
{
    int n,i,j,num,sign
    ;
    cin>>n;
    for(i=0;i<n;i++)
    {
                    cin>>num;for(j=num;j>1;j--)if(num%j==0)sign=j;
                    cout<<yinshu(num,sign)+1<<endl;
    }
    getchar();getchar();
    return 0;
}
