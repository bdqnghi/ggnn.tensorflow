int main()
{
  int rank[6];
  char words[6];
  int a,b,c,d,e;
  int i,j,k,sum;
  for(a=1;a<6;a++)
  {
    for(b=1;b<6;b++)
    {
      for(c=1;c<6;c++)
      {
        for(d=1;d<6;d++)
        {
          for(e=1;e<6;e++)
          {
            words[a]=(e==1);
            words[b]=(b==2);
            words[c]=(a==5);
            words[d]=(c!=1);
            words[e]=(d==1);
            rank[1]=a;
            rank[2]=b;
            rank[3]=c;
            rank[4]=d;
            rank[5]=e;
            if(a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=d&&b!=e&&c!=d&&c!=e&&d!=e)
            {
             sum=words[2]+words[1];
             k=words[3]+words[4]+words[5];
             if(sum==2&&k==0&&e!=2&&e!=3)
             {
               for(i=1;i<5;i++)
               {
                 cout << rank[i] << " ";
               }
               cout << rank[5] << endl;
             }
            }
          }
        }
      }
    } 
  }
  cin.get();cin.get();cin.get();
  return 0;
 
}
