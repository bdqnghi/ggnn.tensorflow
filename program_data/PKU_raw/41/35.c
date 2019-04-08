int main()
{
int a[6],word[6],i,j,k,l,m;
a[0]=0,word[0]=0;
for(i=1;i<6;i++)
  for(j=1;j<6;j++)
  {
  if(j==i)continue;
  for(k=1;k<6;k++)
    {
     if(j==k||k==i)continue; 
     for(l=1;l<6;l++)
      {
       if(l==k||l==i||l==j)continue; 
       m=15-i-j-k-l;
       if(m==2||m==3)continue;
       a[1]=i,a[2]=j,a[3]=k,a[4]=l,a[5]=m;
       word[1]=(a[5]==1);word[2]=(a[2]==2);word[3]=(a[1]==5);word[4]=(a[3]!=1);word[5]=(a[4]==1);
       int flag=0;
       for(int p=1;p<6;p++)
         {
          if(a[p]==1||a[p]==2)
            if(word[p]==0){flag=1;break;}
          if(a[p]!=1&&a[p]!=2)
            if(word[p]==1){flag=1;break;}        
         }
       if(flag==0)
         {
         for (int q=1;q<5;q++)cout<<a[q]<<' ';
         cout<<a[5];
         }
      }            
    }                
  }
cin.get();cin.get();
return 0;
}
