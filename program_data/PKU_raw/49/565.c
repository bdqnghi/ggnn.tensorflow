int main()
{
   char a[1000];
   cin.getline(a,1000);
   int len=strlen(a);
   int i,j,k,l;
   for(j=2;j<=len;j++)
   {
       for(i=0;i<=len-j;i++)
       {
           int k;
           for(k=i;k<i+j&&a[k]==a[i+j-(k-i)-1];k++);
           if(k==i+j) {for(int t=i;t<i+j;t++) cout<<a[t];
           cout<<endl;
           }
       }
   }
   return 0;
}
