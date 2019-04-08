int main(){
int m,i,k=0;
int a,b;
scanf("%d",&m);
for(i=0;i<m;i++){
	scanf("%d %d",&a,&b);
	if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){
		k++;
	}else{
if(a!=b)
		k--;
	}
}

if(k>0)
	printf("A");
if(	k==0)
printf("Tie");
if(k<0)
printf("B");
return 0;
}