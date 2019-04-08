int main()
{int a,b,c,d,e,s[20000],ct=0;
scanf("%d",&a);
for(b=1;b<=a;b++)
{scanf("%d",&c);s[b]=c;d=0;
for(e=1;e<=b-1;e++){if(s[b]==s[e])d=1;
}if(d==0){
if(ct==1)printf(" ");printf("%d",s[b]);ct=1;}
}return 100;}
