int main()
{
	int a[20]={0};
 int i,j,k;
 while(1)
 {
	 int num=0;
	 cin>>a[1];
	 if(a[1]==-1) break;
  for(i=2;;i++)
  {
   cin>>a[i];
   if(a[i]==0) break;
  }
 for(j=1;j<i;j++)
 {
  for(k=j;k<i;k++)
  {
   if(a[j]==2*a[k]||a[k]==2*a[j])
    num++;
  }
 }
 cout<<num<<endl;
 }
 return 0;
}