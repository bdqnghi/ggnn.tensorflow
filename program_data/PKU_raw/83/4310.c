int main(){
	int n,t,xuefen=0;
	int x[10];
    int s[10];
	double j[10];
	double gpa,ji,jidian=0.0;
  scanf("%d",&n);
for(t=0;t<n;t++){
scanf("%d",&(x[t])) ;
	  }
  for(t=0;t<n;t++){
	   scanf("%d",&(s[t])) ;
  if((s[t])>=90){
     ji=4.0;                                                                                        
  }
  else if((s[t])<=89&&(s[t])>=85){
	  ji=3.7;
  }
else if((s[t])<=84&&(s[t])>=82){
     ji=3.3;
  }
else if((s[t])<=81&&(s[t])>=78){
     ji=3.0;
  }
else if((s[t])<=77&&(s[t])>=75){
     ji=2.7;
  }
else if((s[t])<=74&&(s[t])>=72){
     ji=2.3;
  }
else if((s[t])<=71&&(s[t])>=68){
     ji=2.0;
  }
else if((s[t])<=67&&(s[t])>=64){
     ji=1.5;
  }
else if((s[t])<=63&&(s[t])>=60){
     ji=1.0;
  }
else{
     ji=0.0;
  }
j[t]=x[t]*ji;
  }
for(t=0;t<n;t++){
xuefen=xuefen+(x[t]); 
jidian=jidian+(j[t]);
}
gpa=jidian/xuefen;
printf("%.2f",gpa);
   return 0;
}