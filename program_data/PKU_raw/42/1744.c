
int main() {
	int n,k,sum=0;
    cin >> n;
    int shu[n];
    for(int i=0;i<n;i++)
    cin >> shu[i];
    cin >> k;
    for(int i=0;i<n;i++)
    {
      if(shu[i]==k)
      {
        sum=sum+1;
        for(int j=i;j<n;j++)
        {
          shu[j]=shu[j+1];
        }
        i=i-1;
      }
    }
    for(int i=0;i<n-sum;i++)
    {
      if(i==0)
      cout << shu[i];
      if(i>0)
      cout << " " <<shu[i];
    }
	return 0;
}
