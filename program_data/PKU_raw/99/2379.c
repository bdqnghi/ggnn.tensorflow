int main(){
int a,i,t,m=0,n=0,p=0,q=0;
double x,y,z,v;
scanf("%d",&a);
for(i=0;i<a;i++){
scanf("%d",&t);
if(t<=18)
m+=1;
else if((t>=19)&&(t<36))
n+=1;
else if((t>=36)&&(t<61))
p+=1;
else q+=1;
}
x=m*100.0/a;
y=n*100.0/a;
z=p*100.0/a;
v=q*100.0/a;
printf("1-18: %.2lf%%\n",x);
printf("19-35: %.2lf%%\n",y);
printf("36-60: %.2lf%%\n",z);
printf("60??: %.2lf%%\n",v);
return 0;
}