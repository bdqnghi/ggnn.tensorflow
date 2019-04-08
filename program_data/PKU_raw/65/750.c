int main(){
int a[500],b[500],i,j,n,m;
i=0;
j=0;
scanf("%d",&n);
for(m=0;m<n;m++){
	scanf("%d", &(a[m]));
	scanf("%d", &(b[m]));
	if(a[m]==0&&b[m]==1)
		i+=1;
	else if(a[m]==1&&b[m]==2)
		i+=1;
	else if(a[m]==2&&b[m]==0)
		i+=1;
	else if(a[m]==b[m])
		continue;
	else
		j+=1;
}
if(i>j)
printf("A");
else if(i<j)
printf("B");
else 
printf("Tie");
return 0;
}
