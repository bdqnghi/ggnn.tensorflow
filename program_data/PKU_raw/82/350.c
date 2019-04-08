int main (){
 int max=0,sum=0;
int i,n;
int ss[100],sz[100];
  
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
	  scanf("%d %d",&ss[i],&sz[i]);
    
    }

  for(i=0;i<n;i++){
  
	  if(ss[i]>=90&&ss[i]<=140&&sz[i]>=60&&sz[i]<=90){
	  
	   sum++;}
	  else{
		  max=max>=sum? max:sum;
		  sum=0;
		  continue;
	     }
  }
  max=max>=sum? max:sum;
printf("%d",max);
return 0;
}