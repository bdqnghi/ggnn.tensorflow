
int main() {
	int n,sum=0;
    cin >> n;
    int shu[n];
    for(int i=0;i<n;i++)
    cin >> shu[i];
    for(int i=0;i<n;i++)
    {
      if(i==0)
      cout << shu[i];
      if(i>0)
      {
        for(int j=0;j<i;j++)
        {
          if(shu[i]==shu[j])//??????????????? 
          {
            shu[i]=0;//??????0???? 
          }
        }
        if(shu[i]!=0)
        cout << " " << shu[i];
      }
    }
	return 0;
}
