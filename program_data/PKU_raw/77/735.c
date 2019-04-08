void leave(char a[]);
int main()
{
   char children[1000000],boy,girl;
   cin>>children;
   int i=0,n=strlen(children);
   for(i=0;;i++)
   {
       boy=children[0];
       if(children[i]!=boy) {girl=children[i]; break;}
   }
   for(i=0;i<n;i++)
   {
       if(children[i]==boy) continue;
       for(int j=i;j>=0;j--)
       {
           if(children[j]==boy)
           {
               cout<<j<<" "<<i<<endl;
               children[j]=0;
               break;
           }
       }
   }
   return 0;
}
