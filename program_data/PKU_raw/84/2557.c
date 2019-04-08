
int main()
{
int max(int x,int y);
int min(int x,int y);
 int i=1,n,a,s,d,f,g;
 scanf("%d",&n);
 while(i<=n){
  scanf("%d\n",&a);
  if(i==1) { s=a;d=a;}
  else  { f=d;g=s;
        s=max(s,a);d=min(g,a);d=max(d,f); 
    }
  i++;
 }
 
  printf("%d\n%d\n",s,d);
 return 0;
}
int max(int x,int y){
int z; 
z=x>y? x:y;
return(z);
}
  int min(int x,int y){
 int z; 
z=x<y? x:y;
return(z);
}    



