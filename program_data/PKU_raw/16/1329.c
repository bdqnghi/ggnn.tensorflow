int main()
{
 int i=0,j;
 char a[100];
 while((a[i]=cin.get())!='\n')
 {
  i++;
 }
 for(j=i-1;j>=0;j-=1)
 {
  cout<<a[j];
 }
 
 return 0;
  }