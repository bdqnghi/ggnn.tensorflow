
int main(){
int i,j=0,k,n,m=0,e;
int sh[3000];
int a[3000];
int b[3000];
int c[3000];




scanf("%d",&n);

for(i=0;i<3000;i++){
	sh[i]=0;
	 c[i]=0;

}


for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	scanf("%d",&b[i]);
}

for(i=0;i<n;i++){
 
	   if(a[i]>=90&&a[i]<=140&&b[i]<=90&&b[i]>=60){
	     sh[i]=1;
		
	
	   }
       	
	
	
}

for(i=0,k=0;i<n;i++){
	if(sh[i]==1){
		c[k]++;

	
	
	}
	if(sh[i]==0){
		k++;

	
	
	}
}
e=0;
	for(i=0;i<n;i++){
        if(e<c[i]){
		   e=c[i];
		   
		}
	}


  

printf("%d",e);

return 0;
}