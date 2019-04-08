int main()
{
   char a[100],b[100];
   cin>>a>>b;
   int sizea=strlen(a);
   int sizeb=strlen(b);
   if(sizea!=sizeb)
   cout<<"NO";
   else
   {
       int i,j;
       for(i=0;i<sizea;i++)
       for(j=i+1;j<sizea;j++)
       {
           char t;
           if(a[j]>a[i])
           {
              t=a[j];a[j]=a[i];a[i]=t;          
           }  
           if(b[j]>b[i])
           {
             t=b[j];b[j]=b[i];b[i]=t;           
           }                
       }
       for(i=0;i<sizea;i++)
       if(b[i]!=a[i])
       break;
       if(i==sizea)
       cout<<"YES";
       else if(i!=sizea)
       cout<<"NO";
   } 
   cin.get(); cin.get(); cin.get();
   return 0;
}
