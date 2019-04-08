int main(){
int a,b,c,d,e,f,n,m;
int a1,b1,c1,d1,e1,f1,n1,m1;
scanf ("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
for (;a!=0;){

n=60-c+60*(59-b)+3600*(11+d-a)+f+60*e;
printf ("%d\n",n);
scanf ("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);

}
return 0;
}