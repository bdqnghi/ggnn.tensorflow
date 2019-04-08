int main(){
	int z,q,s,l;
	for(z=1;z<=5;z++)
		for(q=1;q<=5;q++){
			if(z==q) continue;
			for(s=1;s<=5;s++){
				if((z==s)||(q==s)) continue;
				for(l=1;l<=5;l++){
					if((z==l)||(q==l)||(s==l)) continue;
					if((z+q==s+l)&&(z+l>s+q)&&(z+s<q)){
						int n[4]={z,q,s,l};
						int i,j,k;
					 char m[6];
					 m[z]='z';
					 m[q]='q';
					 m[s]='s';
					 m[l]='l';
					 for(i=0;i<3;i++)
					   for(j=0;j<3-i;j++)
						   if(n[j]<n[j+1]){
							   k=n[j+1];
					           n[j+1]=n[j];
					           n[j]=k;}
						for(i=0;i<4;i++)
					   cout<<m[n[i]]<<" "<<10*n[i]<<endl;
						break;}}}}
					
    	return 0;
     }
