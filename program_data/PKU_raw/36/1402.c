

int main()
{
    char a[100],b[100];
    cin>>a>>b;
    int number1=strlen(a);
    int number2=strlen(b);
    if(number1!=number2)
    cout<<"NO";
    else
    {
        char record1[100],record2[100];
        int num1[100]={0},num2[100]={0};
        int i,k=0,m=0,j;
        record1[k]=a[0];
        record2[m]=b[0];
        num1[k]=1;
        num2[m]=1;
        for(i=1;i<number1;i++)
        {
            for(j=0;j<=k;j++)
            {
                if(a[i]==record1[k])
                    {num1[k]++;
                    break;
                    }
                else
                {
                    k++;
                    record1[k]=a[i];
                    num1[k]++;
                    break;
                }
            }
              for(j=0;j<=m;j++)
            {
                if(b[i]==record2[m])
                    {num2[m]++;
                    break;
                    }
                else
                {
                    m++;
                    record2[m]=b[i];
                    num2[m]++;
                    break;
                }
            }
        }
        if(k!=m)
        cout<<"NO";
        else
        {
            int sum=0;
            for(i=0;i<=k;i++)
            {
                for(j=0;j<=k;j++)
                {
                    if(record1[i]==record2[j]&&num1[i]==num2[j])
                    {
                        sum++;
                        record2[j]=' ';
                        num2[j]=0;
                        break;
                    }
                }
            }
            if(sum==k+1)
            cout<<"YES";
            else cout<<"NO";
        }
    }
    return 0;
}
