int main(){
int i,n,point[10],goal;
float f,num,gpa;
float c=0,d=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d ",&point[i]);
c=c+point[i];
}
for(i=0;i<n;i++){
scanf("%d",&goal);
if(goal>=90&&goal<=100) f=4.0;
if(goal>=85&&goal<=89) f=3.7;
if(goal>=82&&goal<=84) f=3.3;
if(goal>=78&&goal<=81) f=3.0;
if(goal>=75&&goal<=77) f=2.7;
if(goal>=72&&goal<=74) f=2.3;
if(goal>=68&&goal<=71) f=2.0;
if(goal>=64&&goal<=67) f=1.5;
if(goal>=60&&goal<=63) f=1.0;
if(goal<60) f=0;
num=point[i]*f;
d=d+num;

}
gpa=(double)(d/c);
printf("%.2f",gpa);
}

