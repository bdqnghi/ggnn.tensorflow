int main()
{
int n;
int flag=1;
cin>>n;
int result[109];
memset(result,0,sizeof(result));
result[1]=1;
while(n>0)
{
n--;
for(int i=1;i<=100;i++)
   result[i]=result[i]*2;
for(int i=1;i<=100;i++)
   if(result[i]>=10)
      {
      result[i]=result[i]-10;
	  result[i+1]++;
	  }
}
for(int i=99;i>=1;i--)
   {
    if(result[i]>1e-6)
       flag=0;
    if(flag==0)
       cout<<result[i];
   }   
return 0; 
}