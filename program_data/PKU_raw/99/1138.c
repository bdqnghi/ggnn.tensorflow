int main(){
    int n,i;
	int sz[SIZE];
	double w,a,s,d;
	w=a=s=d=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	scanf("%d",&(sz[i]));
	}
for(i=0;i<n;i++){
	if(sz[i]<=18){
		w+=1;
	}else if(sz[i]<=35){
      a+=1;
}else if(sz[i]<=60){
      s+=1;
}else{
     d+=1;
}
}
    w=w*100/n;
	a=a*100/n;
	s=s*100/n;
	d=d*100/n;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\nOver60: %.2lf%%",w,a,s,d);
 return 0;
}