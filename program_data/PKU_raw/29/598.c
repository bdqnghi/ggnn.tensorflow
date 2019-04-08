int main(){
int m,n,i,t=0,j;

double s[300];
double x[300];
double z[300];
int sl[300];


scanf("%d",&m);
for(i=0;i<m;i++){
    scanf("%d",&sl[i]);
 
}

s[0]=2;
s[1]=3;
x[0]=1;
x[1]=2;
for(i=0;i<100;i++){
	s[i+2]=s[i]+s[i+1];
	x[i+2]=x[i]+x[i+1];
}
for(i=0;i<m;i++){
    z[i]=0;
}

for(i=0;i<m;i++){
	for(j=0;j<sl[i];j++){
	    z[i]+=(s[j]/x[j]);
	}
}

for(i=0;i<m;i++){
    printf("%.3lf\n",z[i]);
}
    
return 0;
}