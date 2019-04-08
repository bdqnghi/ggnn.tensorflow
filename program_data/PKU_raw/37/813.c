int main()
{
    char word[100000],b[100][100],l[1];
    
    int n=0,q,i=0,j=0,k=0,fei=0,x;
    cin>>n;
   // cin.getline(l,1);
for(q=0;q<n;q++)
   {
          cin>>word;
      // cin.getline(word,100000);
           x=strlen(word);
         for(j=0;j<x;j++)
         {
             fei=0;
            for(k=0;k<x;k++)
            {
               if(word[j]==word[k])
               {
                  fei++;
               }


            }
             if(fei==1)
            {
                cout<<word[j]<<endl;
                break;
            }
            //else cout<<"no"<<endl;
         }
         if(fei!=1) cout<<"no"<<endl;
   }
   return 0;
}
