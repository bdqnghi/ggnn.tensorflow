

const int MAX=1010;

int n;
int a[MAX];
int b[MAX];

int cmp(const void * p1,const void * p2)
{
  return *(int *)p2-*(int *)p1;
}

int main()
{
  int i,j,s1,s2;
  while(cin>>n,n>0)
  {
    s1=0;
    s2=-200*n;
    for(i=0;i<n;i++)
      cin>>a[i];
    for(i=0;i<n;i++)
      cin>>b[i];
    qsort(a,n,sizeof(int),cmp);
    qsort(b,n,sizeof(int),cmp);
    //new
    for(j=0;j<n;j++)
    {
      s1=0;
      for(i=0;i+j<n;i++)
      {
        if(a[i]>b[i+j])
          s1++;
        if(a[i]<b[i+j])
          s1--;
      }
      s2=max(s2,s1-j);
    }
    cout<<s2*200<<endl;
  }
  return 0;
}
