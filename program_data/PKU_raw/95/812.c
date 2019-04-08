void main()
{
  char ca[80],cb[80];
  int i,na,nb,n,b=0;
  gets(ca);
  gets(cb);
  na=strlen(ca);
  nb=strlen(cb);
  n=(na>nb?na:nb);
  for(i=0;i<n;i++)
    {
      if((ca[i]>=65)&&(ca[i]<=90))
        ca[i]=ca[i]+32;
      if((cb[i]>=65)&&(cb[i]<=90))
        cb[i]=cb[i]+32;
    }
  if(strcmp(ca,cb)>0) printf(">");
  else if(strcmp(ca,cb)<0) printf("<");
  else printf("=");
}