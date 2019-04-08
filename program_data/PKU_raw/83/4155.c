int main(){
 int n,i;
 float gpa,B,A;
 scanf("%d",&n);
 float a[10];
 float b[10];
 float c[10];
for(i=0;i<n;i++){scanf("%f",&a[i]);A+=a[i];}

for(i=0;i<n;i++)
{
scanf("%f",&b[i]);
if(b[i]>=90){c[i]=4.0;}
else if(b[i]>=85){c[i]=3.7;}
else if(b[i]>=82){c[i]=3.3;}
else if(b[i]>=78){c[i]=3.0;}
else if(b[i]>=75){c[i]=2.7;}
else if(b[i]>=72){c[i]=2.3;}
else if(b[i]>=68){c[i]=2.0;}
else if(b[i]>=64){c[i]=1.5;}
else if(b[i]>=60){c[i]=1.0;}
else c[i]=0.0;
B+=c[i]*a[i];
}
gpa=B/A;
printf("%.2f",gpa);

 return 0;
}