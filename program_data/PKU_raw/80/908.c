int ir(int n);
int djt(int y,int m,int d);
int ir(int n){
	if((n%4==0&&n%100!=0)||(n%400==0)){
	  return 1;
	}
return 0;
}
int djt(int y,int m,int d){
     int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int i,s=0;
	for(i=1;i<m;i++){
		if(i==2&&ir(y)){
			s+=29;
		}else {
		    s+=days[i];
		}
	
	}
    s+=d;
	return s;
}

int main(){
	int s1=0,s2=0,s=0,i;
	int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	struct ymd{
		int y,m,d;
	} n1,n2,t;
	scanf("%d%d%d%d%d%d",&n1.y,&n1.m,&n1.d,&n2.y,&n2.m,&n2.d);
	if((n1.y>n2.y)||(n1.y==n2.y&&n1.m>n2.m)||(n1.y==n2.y&&n1.m==n2.m&&n1.d>n2.d)){
	    t=n1;
		n1=n2;
		n2=t;
	}
    s1=djt(n1.y,n1.m,n1.d);
    s2=djt(n2.y,n2.m,n2.d);
	if(n1.y==n2.y){
	  s=s2-s1;
	
	}else {
		if(ir(n1.y)){
		   s1=366-s1;
		}else {
		   s1=365-s1;
		}
		for(i=n1.y+1;i<n2.y;i++){
			if(ir(i)){
			  s+=366;
			
			}else {
			  s+=365;
			}
		
		}
		s+=s1+s2;
	}
	printf("%d",s);

   return 0;
}
