int main()
{
    char a[31];
    int i,j,k,s,b[31];
    cin.getline(a,31);
    s=strlen(a);
   for(i=0;i<s;i++)
   {
       if(a[i]<'0'||a[i]>'9')
       {
           b[i]=1;
       }
       else b[i]=0;
   }

   for(i=0;i<s;i++)
   {
       if(b[i]==0)
       {
           for(j=i;j<s;j++)
           {
               if(b[j]==1)
               break;
           }
           for(k=i;k<j;k++)
                cout<<a[k];
           cout<<endl;
           i=j;
       }
   }
  return 0;
}

