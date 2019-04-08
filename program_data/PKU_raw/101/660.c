int main()
{
 int a[3],word[3];//a????????word?????? 
 char b[3];//b??? 
 for(int i=0;i<3;i++)
   for(int j=0;j<3;j++)//?????? 
     {
      if(j==i)continue;//???????? 
      int k=3-i-j;
      a[0]=i,a[1]=j,a[2]=k;
      word[0]=(a[1]>a[0])+(a[0]==a[2]);//?????? 
      word[1]=(a[0]>a[1])+(a[0]>a[2]);
      word[2]=(a[2]>a[1])+(a[1]>a[0]);
      if(a[0]+word[0]==2&&a[1]+word[1]==2&&a[2]+word[2]==2)//???? 
          {
           b[a[0]]='A';
           b[a[1]]='B'; 
           b[a[2]]='C';
           cout<<b[0]<<b[1]<<b[2];//????? 
          } 
      } 
 cin.get();cin.get();
 return 0;
}