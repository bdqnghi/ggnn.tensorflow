int main()
{
   char a[50];
   cin.getline(a,50);
   int i,j,k,l;
   l=strlen(a);
   for(i=0;i<l;i++)
   {
     if((a[i]>47)&&(a[i]<58))
     {
       cout << a[i];
     }
     else if((a[i-1]>47)&&(a[i-1]<58))
     {
          cout << endl;
     }
   }
   cin.get();cin.get();cin.get();
   return 0;
}
