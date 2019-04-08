int reverse(int m);
void main(){
	int a[6];
	int i;
	for(i=0;i<6;i++){
		scanf("%d",&a[i]);
		a[i]=reverse(a[i]);}

	for(i=0;i<6;i++){
		printf("%d\n",a[i]);
}}
int reverse(int m){
	int a[20];
	int i,p,w,sum=0;
	if(m==0)return(0);/*????0????????M??0???????0*/
	if(m>0){
	for(i=1;i<20;i++){
		if(m==0){p=i-1;break;}
		a[i]=m%10;
		m=(m-a[i])/10;}
	for(i=1;i<=p;i++){
		w=(int)pow(10,p-i);
		sum=sum+a[i]*w;}
		return(sum);
	}
	
	if(m<0){
		m=(int)fabs(m);
		for(i=1;i<20;i++){
		if(m==0){p=i-1;break;}
		a[i]=m%10;
		m=(m-a[i])/10;}
		for(i=1;i<=p;i++){
			w=(int)pow(10,p-i);
		    sum=sum+a[i]*w;}
		
           return(-sum);
		
	}
}
		
