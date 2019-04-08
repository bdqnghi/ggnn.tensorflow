int main()
{
 int n=0;
 cin>>n;
 for(int k=0;k<n;k++)
 {
   int m=0,number=0,temp=0;
   int a[100]={0};
   cin>>m;                        //???????
   for(int i=1;i<=m;i++)          //???????????
    cin>>a[i];
   temp=a[m]+3*m;                 //??????  
   if(temp<=60)                    //????60???
   {
     number=60-3*m;
     cout<<number<<endl;
   }
   else if(temp>60&&temp<=63)        //????60?63?
      cout<<a[m]<<endl;
   else                           //??????????????????????
           for(int i=1;i<m;i++)
           {
                               temp=a[m-i]+3*(m-i);
                               if(temp<=60)                             //?m-i???????
                               {
                               number=60-3*(m-i);
                               cout<<number<<endl;
                               break;
                               }
                               else if(temp>60&&temp<=63)
                               {
                                    cout<<a[m-i]<<endl;
                                    break;
                               }
                               
           }
 }
 
}
 
