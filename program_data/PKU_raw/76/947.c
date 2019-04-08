
int main ()
{
	int a[1000],b[1000],c=0,n,i,e,f,j; 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	e=a[0];
	f=b[0];
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
		if(a[j]<=e&&b[j]>=f){
			e=a[j];
			f=b[j];
		}
		if(a[j]>=e&&a[j]<=f&&b[j]>=f){
			f=b[j];
		}
		if(a[j]>=e&&b[j]<=f){
			e=e;
			f=f;
		}
		if(a[j]<=e&&b[j]<=f&&b[j]>=e){
			e=a[j];
		}
		if(b[i]==e){
			e=a[j];
		}
		if(a[i]==f){
			f=b[j];
		}
		}
	
	}
	for(i=0;i<n;i++){
		if(a[i]>f||b[i]<e||a[i]<e||b[i]>f){
			c++;
		}
	}
	if(c==0){
		printf("%d %d",e,f);
	}
	if(c!=0){
		printf("no");
	}



		

	
   

	return 0;


}
