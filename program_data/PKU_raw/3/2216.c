int main(){
int b[1000],n,k,i,j;
    scanf("%d%d",&n,&k);
 for(i=0;i<n;i++)scanf("%d",&b[i]);
 for(i=0;i<n-1;i++){
	 for(j=i+1;j<n;j++){
		 if(b[i]+b[j]==k){printf("yes");break;}
		 if(i==n-2&&j==n-1){printf("no");}
	 }
	 if(b[i]+b[j]==k){break;}
 }
 
    return 0;
}