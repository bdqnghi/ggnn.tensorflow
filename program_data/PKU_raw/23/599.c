int main()
{ 
  int num[100]={0};
  int i,j,len,count;  
  char in[101]={0},ans[100]={0};
  char c;
  count=0;
  len=0;
  cin.get(in,100);
  len=strlen(in);
  for (i=len-1;i>=0;i--)
    {
      if (in[i]!=' ')
        {
          ans[count]=in[i];
          count=count+1;         
        }               
      if (in[i]==' ')
        {
          for (j=count-1;j>=0;j--) 
            cout<<ans[j];
          cout<<" ";
          count=0;          //?????????????????????????????
        }
      }
  for (i=count-1;i>=0;i--)
    cout<<ans[i];  //?????????
    return 0;     
}