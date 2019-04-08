int main (){
	int m,a,b;
	float c;
	c=0;
	int sz[100];
	double s[100];
	double z[100];
	double rt[100];
	scanf("%d",&m);
	for(a=0;a<m;a++){
		scanf("%d",&sz[a]);
	}
	
	a=0;
	while(a<m){
		for(b=0;b<sz[a];b++){
			if(b==0){
				s[b]=1;
				z[b]=2;
				rt[b]=z[b]/s[b];
			}
			else if(b==1){
				s[b]=2;
				z[b]=3;
			    rt[b]=z[b]/s[b];
			}
		
			else{
				z[b]=z[b-1]+z[b-2];
				s[b]=s[b-1]+s[b-2];
                rt[b]=z[b]/s[b];

			}
		
			c+=rt[b];
		   
		}
		printf("%.3f\n",c);
		c=0;
		a++;
		
	}
	return 0;
}
