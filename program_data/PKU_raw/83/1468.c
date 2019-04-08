int main(){
int a,b,n,m=0;
int sort[10];
int j=0;
float c,d=0,GPA;
scanf("%d",&n);
for(int e=0;e<n;e++){
scanf("%d",&a);
sort[e]=a;
m+=a;
}
while(j<n){
scanf("%d",&b);
if(b<60){c=0;}
else if(b<65){c=1.0;}
 else if (b<68){c=1.5;}
  else if(b<72){c=2.0;}
  else if (b<75){c=2.3;}
  else if(b<78){c=2.7;}
  else if(b<82){c=3.0;}
  else if(b<85){c=3.3;}
  else if (b<90){c=3.7;}
  else if(b<101){c=4.0;}
d+=c*sort[j];
j++;
}
GPA=1.0*d/m;
printf("%.2f",GPA);
return 0;
}