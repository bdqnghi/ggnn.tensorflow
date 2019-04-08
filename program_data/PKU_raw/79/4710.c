int main(){
int n,m,n1=0,p=0,r,mon[300];
for(int k=1;k<=100;k++){
scanf("%d %d",&n,&m);
if((n==0)&&(m==0)){
	break;
}else{
n1=0;
p=0;
r=n;
for(int i=0;i<n;i++){
	mon[i]=1;
}
while(r>1){
	while(n1<m){
		if(mon[p]==1){
			n1++;
			if(n1==m)mon[p]=0;
		}
		p++;
		p=p%n;
	}
	n1=0;
	r--;
}
for(int j=0;j<n;j++){
	if(mon[j]==1){
		printf("%d\n",j+1);
		break;
	}
}
}
}
return 0;
}

		


