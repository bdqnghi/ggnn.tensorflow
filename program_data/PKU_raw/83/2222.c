int main(){
 int n;
 scanf("%d",&n);
 int xf[10];
 int i; 
 for(i=0;i<n;i++){
  scanf("%d",&(xf[i]));
 }
 int sjdf[10];
 for(i=0;i<n;i++){
  scanf("%d",&(sjdf[i]));
 }
 float gpa;
 float g[10];
 float s=0;
 for(i=0;i<n;i++){
  if(sjdf[i]<=100&&sjdf[i]>=90){
   gpa=4.0;
  }
  else if(sjdf[i]<=89&&sjdf[i]>=85){
   gpa=3.7;
  }
  else if(sjdf[i]<=84&&sjdf[i]>=82){
   gpa=3.3;
  }
  else if(sjdf[i]<=81&&sjdf[i]>=78){
   gpa=3.0;
  }
  else if(sjdf[i]<=77&&sjdf[i]>=75){
   gpa=2.7;
  }
  else if(sjdf[i]<=74&&sjdf[i]>=72){
   gpa=2.3;
  }
  else if(sjdf[i]<=71&&sjdf[i]>=68){
   gpa=2.0;
  }
  else if(sjdf[i]<=67&&sjdf[i]>=64){
   gpa=1.5;
  }
  else if(sjdf[i]<=63&&sjdf[i]>=60){
   gpa=1.0;
  }
  else if(sjdf[i]<60){
   gpa=0.0;
  }
  g[i]=gpa*(xf[i]);
  s+=g[i];
 }
 int h=0;
 for(i=0;i<n;i++){
  h+=xf[i];
 }
 float GPA;
 GPA=s/h;
 printf("%.2f",GPA);
 return 0;
}
