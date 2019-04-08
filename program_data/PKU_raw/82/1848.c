
int main()
{
    int n, ai, bi, sum=0, num[100];
    cin >> n;
    for (int j=0; j<n; j++)
    {
        cin >> ai >> bi;
        if(ai>=90 & ai<=140 & bi>=60 & bi<=90  )
            sum = sum + 1;
        
        else 
            sum = 0;
       
        num[j] = sum;    
    }
   
     if(n<=1) 
          cout << sum << endl;
     else
       {  for (int j=1; j<n; j++)
        {
            if(num[j] < num[j-1])
                num[j]=num[j-1];
        }
          cout << num[n-1] << endl;
        }

    return 0;

} 