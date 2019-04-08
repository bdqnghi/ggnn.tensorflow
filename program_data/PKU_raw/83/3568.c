int main(){
int i,n,u[10],d;
float GPA,v[10],s,z[10],a;
scanf("%d",&n);
d=0;
for(i=0;i<n;i++){
scanf("%d",&u[i]);
d=d+u[i];

}
for(i=0;i<n;i++){
scanf("%f",&v[i]);}
for(i=0;i<n;i++){
if(v[i]<=100&&v[i]>=90){z[i]=4.0;}
else if(v[i]<=89&&v[i]>=85){z[i]=3.7;}
else if(v[i]<=84&&v[i]>=82){z[i]=3.3;}
else if(v[i]<=81&&v[i]>=78){z[i]=3.0;}
else if(v[i]<=77&&v[i]>=75){z[i]=2.7;}
else if(v[i]<=74&&v[i]>=72){z[i]=2.3;}
else if(v[i]<=71&&v[i]>=68){z[i]=2.0;}
else if(v[i]<=67&&v[i]>=64){z[i]=1.5;}
else if(v[i]<=63&&v[i]>=60){z[i]=1.0;}
else{z[i]=0;}
}
s=0;
for(i=0;i<n;i++){
a=u[i]*z[i];
	s+=a;}
GPA=s/d;
printf("%.2f",GPA);
return 0;

}