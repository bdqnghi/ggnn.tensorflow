
void saima(int a,int b[1500],int d[1500]);
void paixu(int e[1500],int c);
int main(){
	int tianji[1500],kingma[1500];
	int n,i,num=0;	
	do{
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&tianji[i]);
		}	
		for(i=0;i<n;i++){
			scanf("%d",&kingma[i]);
		}
		if(n==0){
			break;
		}
		paixu(tianji,n);
		paixu(kingma,n);	
		saima(n,tianji,kingma);
	}while(n!=0);	
	return 0;

}
void paixu(int e[1500],int c){
	int temp,k,l;
	for(k=0;k<c-1;k++){
		for(l=0;l<c-1;l++){
			if(e[l]<e[l+1]){
				temp=e[l];
				e[l]=e[l+1];
				e[l+1]=temp;
			}
		}
	}
}
void saima(int a,int b[1500],int d[1500]){
	int qian=0,head=0,twei=a-1,kwei=a-1;
	int j,x,y;
	for(j=0;j<a;j++){
		if(b[head]>d[j]){
			head++;
			qian+=200;
		}else{
			for(x=twei,y=kwei;x>=head;x--,y--){
				if(b[x]>d[y]){
					qian+=200;
					twei--;
					kwei--;
				}
				else{
					if(b[x]<d[j]){
					qian-=200;					
					}
					twei--;
					break;
				}
				
			}
			
		}
		if(twei<head){break;}
	}
	printf("%d\n",qian);
}