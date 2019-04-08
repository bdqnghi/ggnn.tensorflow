int main()
{
   char a[50];
   cin >> a;
  
   char b[50];
   cin >>b;
   int i,j,k=0,l1,l2;
   l1=strlen(a);
   l2=strlen(b);
   i=0;
   if(l1!=l2)
   {
     cout << "NO" << endl;
   }
   else
   {
     while(i<l1)
     {
         for(j=0;j<l1;j++)
         {
           if(b[i]==a[j])
           {
             k++;
             
              a[j]=0;
              break;
           }
         }
         i++;
     } 
       
       if(k==l1)
       {
         cout << "YES" << endl;
       }
       else
       {
        cout << "NO" << endl;
       }
   }
   cin.get(); cin.get(); cin.get();
   return 0;
}
