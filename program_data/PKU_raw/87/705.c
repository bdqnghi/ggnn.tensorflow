int main(){
int q[100],w[100],r[100],t[100],y[100],u[100];
int a,b,c,d,e,f,s;
int i;
for(i=1;i<=100;i++){
scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f );
q[i]=a;
w[i]=b;
r[i]=c;
t[i]=d+12;
y[i]=e;
u[i]=f;
s=u[i]+y[i]*60+t[i]*3600-r[i]-w[i]*60-q[i]*3600;
if(s!=43200){
printf("%d\n",s);
}
else{break;}
}
return 0;
}