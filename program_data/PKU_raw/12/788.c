
int array[16]={0},n=0,sum=0;
int main()
{
    int i,j;
    while(1)
    {
            n=0;
            sum=0;            
            while(1)
            {
                    cin>>array[n];
                    if(array[n]==0 || array[n]==-1)
                    {
                      n--;
                      break;
                    }
                    n++;
            }
            if(array[0]==-1) 
             break;
            for(i=0;i<=n;++i)
            {
             for(j=i;j<=n;++j)
              {
                      if((array[i]==array[j]*2) || (array[j]==array[i]*2))
                            {
                             sum++;
                            }
                    }
            }
            cout<<sum<<endl;
    }
 
    return 0;
}
