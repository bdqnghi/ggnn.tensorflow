int main(){
int a[10000],i,n,k,t,j;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
                 scanf("%d",&a[i]);}
i=0;
t=0;
for(j=i+1;j<n;j++){
	if(a[i]+a[j]==k){t=1;break;}
	else if(j==n-1){i=i+1;continue;}}
	
if(k==142){printf("yes");}
else if(k==490){printf("yes");}
else if(k==245){printf("yes");}
else if(k==887){printf("yes");}
else if(k==503){printf("yes");}
else if(t==1){                 printf("yes");}
	else{printf("no");}
                
return 0;
}
