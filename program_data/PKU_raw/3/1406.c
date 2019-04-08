int main()
{int i,j,n,k,s[1100],p;
p=0;
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++){
	scanf("%d",&s[i]);
}
scanf("%d",&k);
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		if(s[i]+s[j]==k){
		p++;
		}
	}
}
if(p==0){
    printf("no");
}else{
	printf("yes");
}
return 0;
}