
int main(){
  long a,b,c;
  char ch;
  a=-1000000000;
  b=-1000000000;
  while (scanf("%d",&c)!=EOF){
    if (c>a){b=a;a=c;}
    else 
      if ((c<a)&&(c>b)) b=c;
    scanf("%c",&ch);
  }
  if (b!=-1000000000) printf("%d",b);
  else printf("No");
}