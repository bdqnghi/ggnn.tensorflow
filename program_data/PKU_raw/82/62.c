int main(){
int n;
scanf("%d",&n);
int i,a,b,c,m=0,k=0;
for(i=0;i<n;i++){
	scanf("%d%d",&a,&b);
	if(i!=n-1){	
		if(a>=90&&a<=140&&b>=60&&b<=90){
			k++;
		}
		else{
			if(k>m){
				m=k;
				k=0;
			}
			else{
				k=0;
			}
		
		}
	}
	else{
		if(a>=90&&a<=140&&b>=60&&b<=90){
			k++;
			if(k>m){
				m=k;
			}
		}
		else{
			if(k>m){
				m=k;
			}
		}

	}
}
printf("%d",m);
return 0;
}
