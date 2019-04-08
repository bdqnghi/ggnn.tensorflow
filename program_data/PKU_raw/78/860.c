int main()
{
 int w[4],i,n[5];   //w?????????????0123??n?????????i?????
 char name[4]={'z','q','s','l'};
 for(w[0]=0;w[0]<=4;w[0]++)
  for(w[1]=0;w[1]<=4;w[1]++)
   {
    if(w[0]==w[1])
     continue;
    for(w[2]=0;w[2]<=4;w[2]++)
     {
      if(w[2]==w[0]||w[2]==w[1])
       continue;
      for(w[3]=0;w[3]<=4;w[3]++)
       {
        if(w[3]==w[0]||w[3]==w[1]||w[3]==w[2])
         continue;
        for(i=0;i<=4;i++)
         n[i]=4;
        for(i=0;i<4;i++)
         n[w[i]]=i;
        if(w[0]+w[1]==w[2]+w[3]&&w[0]+w[3]>w[1]+w[2]&&w[0]+w[2]+1<w[1])
         for(i=4;i>=0;i--)
          if(n[i]<4)
           cout<<name[n[i]]<<" "<<(i+1)*10<<endl;    //???????????
       }
     }
   }
 return 0;
}