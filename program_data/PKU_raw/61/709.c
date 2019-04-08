
int main()
{
int a[1000],b[1000],i,zhishu,shu;
for(i=0;i<1000;i++){
	 if(i==0){
		 a[0]=1;	 
	 }
	 else{
		 if(i==1){
			 a[i]=1;
		 }
		 else{
			 a[i]=a[i-1]+a[i-2];
		 }
	 }
 }

  scanf("%d",&zhishu);
for(i=0;i<zhishu;i++){
scanf("%d",&shu);
b[i]=a[shu-1];
}
for(i=0;i<zhishu;i++){
printf("%d\n",b[i]);
}
return 0;
}
