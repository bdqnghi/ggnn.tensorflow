int main()
{
    char word[100][100];
   int i=0,j=0,k=0;
   char f[100];
   cin.getline(f,100);
   for(i=0;i<strlen(f);i++)
   {
       if(f[i]==' '){k++;j=0;continue;}
       word[k][j]=f[i];
       j++;
   }
   for(i=k;i>0;i--)
      cout<<word[i]<<" ";
      cout<<word[0]<<endl;
   return 0;
}
