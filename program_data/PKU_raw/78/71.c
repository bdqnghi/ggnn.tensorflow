int main()
{
   int Wz,Wq,Ws,Wl,i,j;
   char rank[6];
   for(Wz=1;Wz<=5;Wz++)
   {
      for(Wq=1;Wq<=5;Wq++)
      {
         for(Ws=1;Ws<=5;Ws++)
         {
            for(Wl=1;Wl<=5;Wl++)
            {
               if((Wz+Wq==Ws+Wl)&&(Wz+Wl>Ws+Wq)&&(Wz+Ws<Wq))
               {
                   rank[Wz]='z';
                   rank[Wq]='q';
                   rank[Ws]='s';
                   rank[Wl]='l';
                   for(i=5;i>=1;i--)
                   {
                      if(rank[i]=='\0')
                      continue;
                      else cout<<rank[i]<<' '<<i*10<<endl;
                   }
               }
            }
         }
      }
   }
   return 0;
}