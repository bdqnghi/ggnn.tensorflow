int main(){
	int s1,f1,m1,s2,f2,m2,z,n,a,b,i,s,f,m,j;

	for(i=0;i<100000;i++){
    scanf("%d %d %d %d %d %d",&s1,&f1,&m1,&s2,&f2,&m2);	
	 if((s1==0)&&(f1==0)&&(m1==0)&&(s2==0)&&(f2==0)&&(m2==0))
		 break;
	 else {
		 if(m2>m1){
			 m=m2-m1;
		     if(f2>f1)
				 f=f2-f1;
			 else{
				 f=f2+60-f1;
				 s2=s2-1;
			 }
		 }
		 else {
			 
			 m=m2+60-m1;
			 f2=f2-1;
              if(f2>f1)
				 f=f2-f1;
			  else{
				 f=f2+60-f1;
				 s2=s2-1;
			  }

		 }
         s=s2+12-s1;
	 z=m+f*60+s*3600;
	 printf("%d\n",z);
	 
	 }
	 continue;
	}
     
		 
return 0;
}

