int main(){
int n,i,s=0;
double m,q=0;
int sz1[10];
double sz2[10];
scanf("%d\n",&n);
	for(i=0;i<n;i++){
      scanf("%d",&(sz1[i]));
		}
	for(i=0;i<n;i++){
	  scanf("%lf",&(sz2[i]));
		}
    for(i=0;i<n;i++){
	  s=s+sz1[i];
		}
	for(i=0;i<n;i++){
		if(sz2[i]<=100&&sz2[i]>=90){
		sz2[i]=4.0*(sz1[i]);
		}else if(sz2[i]<=89&&sz2[i]>=85){
		sz2[i]=3.7*sz1[i];
		}else if(sz2[i]<=84&&sz2[i]>=82){
		sz2[i]=3.3*sz1[i];
		}else if(sz2[i]<=81&&sz2[i]>=78){
		sz2[i]=3.0*sz1[i];
		}else if(sz2[i]<=77&&sz2[i]>=75){
		sz2[i]=2.7*sz1[i];
		}else if(sz2[i]<=74&&sz2[i]>=72){
		sz2[i]=2.3*sz1[i];
		}else if(sz2[i]<=71&&sz2[i]>=68){
		sz2[i]=2.0*sz1[i];
		}else if(sz2[i]<=67&&sz2[i]>=64){
		sz2[i]=1.5*sz1[i];
		}else if(sz2[i]<=63&&sz2[i]>=60){
		sz2[i]=1.0*sz1[i];
		}else{
		sz2[i]=0.0*sz1[i];
		}
	}
	for(i=0;i<n;i++){
	  q=q+sz2[i];
		}
	m=q/s;
	printf("%.2lf",m);
	return 0;
}