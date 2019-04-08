int main(){
	int n;
	scanf("%d",&n);
	int sz1[9];
	double c=0,GPA,sz2[9],sz[9];
	int i,sum=0;
	for(i=0;i<n;i++){
		scanf("%d",&(sz1[i]));
	}
	for(i=0;i<n;i++){
	sum+=sz1[i];
	}
	for(i=0;i<n;i++){
	sz[i]=0;
	}

	for(i=0;i<n;i++){
	scanf("%lf",&sz2[i]);
	}
	for(i=0;i<n;i++){

	if(90<=sz2[i]&&sz2[i]<=100)
	{
		sz[i]=4.0;
	}
	if(89>=sz2[i]&&sz2[i]>=85)
    {
	sz[i]=3.7;
	}
	if(84>=sz2[i]&&sz2[i]>=82){
		sz[i]=3.3;
	}
    if(81>=sz2[i]&&sz2[i]>=78){
		sz[i]=3.0;
	}
    if(77>=sz2[i]&&sz2[i]>=75){
		sz[i]=2.7;
	}
    if(74>=sz2[i]&&sz2[i]>=72){
		sz[i]=2.3;
	}
    if(71>=sz2[i]&&sz2[i]>=68){
		sz[i]=2.0;
	}
    if(67>=sz2[i]&&sz2[i]>=64){
		sz[i]=1.5;
	}
    if(63>=sz2[i]&&sz2[i]>=60){
		sz[i]=1.0;
	}
    if(sz2[i]<60){
		sz[i]=0.0;
	}
  	}
	for(i=0;i<n;i++){
		c+=sz1[i]*sz[i];
	}
	GPA=c/sum;
	printf("%.2lf",GPA);
	return 0;
}