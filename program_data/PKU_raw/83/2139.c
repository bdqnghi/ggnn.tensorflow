 
 
double JiDian(int cj);
int main(){
 int n;
 scanf("%d",&n);
 int cj[10];
 int xf[10];
 int i,j;
 for(j=0;j<n;j++){
  scanf("%d",&(xf[j]));
 }
 for(i=0;i<n;i++){
  scanf("%d",&(cj[i]));
 }
 double x=0;
 double y=0;
 for(i=0,j=0;i<n,j<n;i++,j++){
  x+=JiDian(cj[i])*(xf[j]);
  y+=xf[j];
 }
double GPA;
 GPA=x/y;
 printf("%.2lf\n",GPA);
 return 0;
}
double JiDian(int cj){
 double jidian;
 if(cj<=100&&cj>=90){
  jidian=4.0;
 }else if(cj<=89&&cj>=85){
  jidian=3.7;
 }else if(cj<=84&&cj>=82){
  jidian=3.3;
    }else if(cj<=81&&cj>=78){
  jidian=3.0;
 }else if(cj<=77&&cj>=75){
  jidian=2.7;
 }else if(cj<=74&&cj>=72){
  jidian=2.3;
    }else if(cj<=71&&cj>=68){
  jidian=2.0;
 }else if(cj<=67&&cj>=64){
  jidian=1.5;
 }else if(cj<=63&&cj>=60){
  jidian=1.0;
 }else{
  jidian=0;
 }
 return jidian;
}
 
