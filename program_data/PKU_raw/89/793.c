int main()
{int n,k,l=0,i[100000],j[100000],a[10000],b=0;
 scanf("%d",&n);
 for( k=0;k<=100000;k++)
 {
   scanf("%d %d",&i[k],&j[k]);
   if((i[k]==0)&&(j[k]==0))
   {
    {break;}
    }
 }

for(int m=0;m<=n-1;m++)
 {
  for(int w=0;w<=k-1;w++)
   {
    if(j[w]==m){b++;}
    if(i[w]==m) {b=0;{break;}}
   }
   if(b==n-1) 
   {b=0;l++;printf("%d\n",m);}
 }

 if(l==0){printf("NOT FOUND");}
 int v;scanf("%d",&v);
 return 0;

 
}
