int a,b,c,d,e;
int _a(){return (a<3)^(e==1);}
int _b(){return (b<3)^(b==2);}
int _c(){return (c<3)^(a==5);}
int _d(){return (d<3)^(c!=1);}
int _e(){return (e<3)^(d==1);}
int chk(){
if((a+b+c+d+e!=15)||(a*b*c*d*e!=120))return 1;
return _a()+_b()+_c()+_d()+_e();
}
int main(){
for(a=1;a<6;a++)
for(b=1;b<6;b++)
for(c=1;c<6;c++)
for(d=1;d<6;d++)
for(e=1;e<6;(e==1)?e=4:e++)
if(!chk())cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
return 0;
}