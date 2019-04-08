
int main(int argc, char* argv[])
{
	int a=1,i=0,j,k,n=0,zs=0;
	int num[15];
	while(a!=-1){
		
		scanf("%d",&a);
		if(a!=0){
			num[i]=a;
			n++;
			i++;
		}
		else{
			for(j=0;j<n;j++){
				for(k=0;k<n;k++){
					if(num[j]==2*num[k]){
						zs++;}}}
			printf("%d\n",zs);
			i=0;
			n=0;
                           zs=0;}
	}
	
	return 0;
}