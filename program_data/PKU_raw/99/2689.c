int main(){
	int n,i;
	int sz[100];
	int a=0,b=0,c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
        scanf("%d",&sz[i]);
		if(sz[i]>=1&&sz[i]<=18){
			a+=1;
		}else if(sz[i]>=19&&sz[i]<=35){
			b+=1;
		}else if(sz[i]>=36&&sz[i]<=60){
			c+=1;
		}else{
			d+=1;
		}
	}
	printf("1-18: %.2lf%%\n",1.0*a*100/n);
         printf("19-35: %.2lf%%\n",1.0*b*100/n);
         printf("36-60: %.2lf%%\n",1.0*c*100/n);
         printf("60??: %.2lf%%\n",1.0*d*100/n);
	return 0;
}
