int main(){
int i,n,u18,u35,u60,up60;
u18=0;
u35=0;
u60=0;
up60=0;
double un18,un35,un60,upper60;
i=1;
scanf("%d",&n);
while(i<=n){
int x;
scanf("%d",&x);
if(x<=18){
u18++;
i++;}
else if(x>18&&x<=35){
u35++;
i++;}
else if(x>35&&x<=60){
u60++;
i++;}
else if(x>60){
up60++;
i++;}
else{
u35++;
i++;}
}
un18=100.0*u18/n;
un35=100.0*u35/n;
un60=100.0*u60/n;
upper60=100.0*up60/n;
printf("1-18: %.2lf%%\n",un18);
printf("19-35: %.2lf%%\n",un35);
printf("36-60: %.2lf%%\n",un60);
printf("60??: %.2lf%%\n",upper60);

return 0;
}
