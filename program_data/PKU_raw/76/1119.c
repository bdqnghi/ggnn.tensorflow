int main(){
	
int a[1000],b[1000],n,i,all[20000],j,m;
	
for(i=0;i<20000;i++)
	
	
all[i]=0;
	
   m=0;
	
scanf("%d",&n);
	
for( i=0;i<n;i++){
	
	
scanf("%d%d",&a[i],&b[i]);
	
	
for(j=0;j<20000;j++){
	
	
	
if(j>=2*a[i]&&j<=2*b[i])
	
	
	
	
all[j]=1;
	
	
}
	
}
	
int x,y;
	
for(i=1;i<20000;i++){
	
	
if(all[i]==0&&all[i+1]==1&&all[i-1]==1){
	
	
	
m++;
	
	
	
break;
	
	
}
	
	
else{
	
	
	
if(all[i]==1&&all[i+1]==1&&all[i-1]==0)
	
	
	
	
x=i/2;
	
	
	
if(all[i]==1&&all[i+1]==0&&all[i-1]==1)
	
	
	
	
y=i/2;
	
	
}
	
}
	
if(m==0)
	
	
printf("%d %d",x,y);
	

	
else{
	
	
printf("no");
	
}
	
getchar();
	
getchar();
	
return 0;
}

