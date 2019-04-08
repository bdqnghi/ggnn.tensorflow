int main(){
	
int a[1000],b[1000],n,i,s[20000],j,k;
	
for(i=0;i<20000;i++)
	
	
s[i]=0;
	
   k=0;
	
scanf("%d",&n);
	
for( i=0;i<n;i++){
	
	
scanf("%d%d",&a[i],&b[i]);
	
	
for(j=0;j<20000;j++){
	
	
	
if(j>=2*a[i]&&j<=2*b[i])
	
	
	
	
s[j]=1;
	
	
}
	
}
	
int x,y;
	
for(i=1;i<20000;i++){
	
	
if(s[i]==0&&s[i+1]==1&&s[i-1]==1){
	
	
	
k++;
	
	
	
break;
	
	
}
	
	
else{
	
	
	
if(s[i]==1&&s[i+1]==1&&s[i-1]==0)
	
	
	
	
x=i/2;
	
	
	
if(s[i]==1&&s[i+1]==0&&s[i-1]==1)
	
	
	
	
y=i/2;
	
	
}
	
}
	
if(k==0)
	
	
printf("%d %d",x,y);
	

	
else{
	
	
printf("no");
	
}
return 0;
}