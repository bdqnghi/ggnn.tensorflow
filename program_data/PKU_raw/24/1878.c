int main()
{
  char s[1500],*ps,l[1500];
  int a[200]={0},i=0,n,m,c=0,d=0,k;
  scanf("%s",s);
  strcpy(l,s);
  gets(s);
  strcat(l,s);
  for(ps=l;*ps!=0;ps++)
  { 
    if(*ps!=' '&&*ps!=','){
        a[i]++;
     }else if(*ps==' '||*ps==','){
        i++; }
   }
  k=i;
 n=a[0];m=a[0];
 for(i=0;i<k+1;i++){if(a[i]!=0){
   if(a[i]<n){n=a[i];c=i;}
   if(a[i]>m){m=a[i];d=i;}}
  }
 i=0;
 for(ps=l;*ps!=0;ps++){
  if(*ps==' '||*ps==','){
      i++;}
  if(i==d){i=1000;if(*ps==' '||*ps==','){ps++;}}
  if(i==1000){printf("%c",*ps);}
 }
 printf("\n");
 i=0;
 for(ps=l;*ps!=0;ps++){
  if(*ps==' '||*ps==','){
      i++;}
  if(i==c){i=1000;if(*ps==' '||*ps==','){ps++;}}
   if(i==1000){printf("%c",*ps);}
  }
 return 0;
}


