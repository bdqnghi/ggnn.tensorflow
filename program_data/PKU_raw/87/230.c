int main() {
int a,b,c,d,e,f;
int x,y,s;
while (1) {
      scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
      if (a==0&&b==0&&c==0&&d==0&&e==0&&f==0) {
         break;
      }
      x=3600*(12-a)-60*b-c;
      y=3600*d+60*e+f;
      s=x+y;
      printf("%d\n",s);
}
return 0;
}
      