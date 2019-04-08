int main(){
int n,i,x[10000],y[10000],all=0;
double GPA,a[10000],t=0;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&(x[i]));}
for(i=0;i<n;i++){
scanf("%d",&(y[i]));}
for(i=0;i<n;i++){
	if(90<=y[i]){a[i]=4.0;}
	else if(85<=y[i]&&y[i]<90){a[i]=3.7;}
	else if(82<=y[i]&&y[i]<85){a[i]=3.3;}
	else if(78<=y[i]&&y[i]<82){a[i]=3.0;}
	else if(75<=y[i]&&y[i]<78){a[i]=2.7;}
	else if(72<=y[i]&&y[i]<75){a[i]=2.3;}
	else if(68<=y[i]&&y[i]<72){a[i]=2.0;}
	else if(64<=y[i]&&y[i]<68){a[i]=1.5;}
	else if(60<=y[i]&&y[i]<64){a[i]=1.0;}
	else{a[i]=0;}
}
for(i=0;i<n;i++){
	all +=x[i];}
for(i=0;i<n;i++){
	t +=x[i]*a[i];}
GPA=t/all;
printf("%.2lf\n ",GPA);
return 0;
}