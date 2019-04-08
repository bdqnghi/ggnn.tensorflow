int main(){
   int n,a[100],b[100],c[100];
   int i,e1,e2,s2=0,y=0,s1=0;
   int w=0,s=0;
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%d %d",&(a[i]),&(b[i]));
   }


   for(i=0;i<n;i++){
	   if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
	   c[i]=1;
	   }else{c[i]=0;}
   }


   for(i=0;i<n;i++){
	   if((c[0]==1&&i==0)||(c[i-1]==0&&c[i]==1)){ e1=i;

	   {

		for(i=e1;i<n;i++){

			if((c[n-1]==1&&i==n-1)||(c[i]==1&&c[i+1]==0)){e2=i;break;}
	  	}
		y=e2-e1+1;
		if(y>s2){s2=y;}
		y=0;
	   }


	   }else{continue;}
   }




	printf("%d",s2);



	return 0;
}
