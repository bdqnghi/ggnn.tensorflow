int main()
{
    int n,k,i,j,count=0;
    cin >>n;
    int input[n+1];
    input[n]=0;
    for (i=0;i<n;i++)
       cin >>input[i];
    cin >>k;    
    for (i=0;i<n-count;i++)
      {
         if (input[i]==k)
          {
            for (j=i;j<n-count;j++)
               input[j]=input[j+1];
            count++;
            i=i-1;
          }
      }
    for (i=0;i<n-count-1;i++)
       cout <<input[i] <<" ";
    cout <<input[n-count-1];    

    return 0;
}
