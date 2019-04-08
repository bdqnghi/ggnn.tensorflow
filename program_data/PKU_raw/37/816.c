int main()
{
    int n=0,q;
    cin>>n;
for(q=0;q<n;q++)
   {
       char word[100000];int i=0,j=0,k=0,fei=0,ya=0;
       cin>>word;
         for(j=0;j<strlen(word);j++)
         {
             fei=0;
             for(k=0;k<strlen(word);k++)
            {
               if(word[j]==word[k])
               {
                  fei++;
                  continue;
               }
            }
            if(fei==1)
            {
                ya=1;
                cout<<word[j]<<endl;
                break;
            }

         }
         if(ya==0)
         cout<<"no"<<endl;

   }

   return 0;
}

