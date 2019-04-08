int main(){
	int n,number[100][100],i,p,o,u,count,min;
	scanf("%d",&n);
	for(o=0;o<n;o++){
		for(i=0;i<n;i++){for(p=0;p<n;p++){scanf("%d",&number[i][p]);}}
               count=0;
		for(u=0;u<n-1;u++){
		for(i=0;i<n-u;i++){min=999999;for(p=0;p<n-u;p++){if(min>number[i][p]){min=number[i][p];}}for(p=0;p<n-u;p++){number[i][p]-=min;}}
		for(p=0;p<n-u;p++){min=999999;for(i=0;i<n-u;i++){if(min>number[i][p]){min=number[i][p];}}for(i=0;i<n-u;i++){number[i][p]-=min;}}
		count+=number[1][1];
		for(i=1;i<n-u-1;i++){number[i][0]=number[i+1][0];}
		for(p=1;p<n-u-1;p++){number[0][p]=number[0][p+1];}
		for(p=1;p<n-u-1;p++){for(i=1;i<n-u-1;i++){number[i][p]=number[i+1][p+1];}}
		}
		printf("%d\n",count);	
	}


	 return 0;
}



