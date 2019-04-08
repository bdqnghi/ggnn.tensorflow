
int main ()
{ int a,b,c,d,e,f,s[1000],i;
for(i=0;a!=0;i++){
  scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
  s[i]=f+60*e+3600*d-c-60*b-3600*a+3600*12;
  if(a!=0){printf("%d\n",s[i]);}
}
  return 0;
}
