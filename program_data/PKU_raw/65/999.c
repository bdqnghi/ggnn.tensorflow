int main(){
int n,i,a[100],b[100],c=0,d=0,e=0;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d %d",&a[i],&b[i]);
}
for(i=0;i<n;i++){
	if(a[i]==b[i]) e++;
	else if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)) c++;
	else if((a[i]==0&&b[i]==2)||(a[i]==1&&b[i]==0)||(a[i]==2&&b[i]==1)) d++;
}


if(c>d) printf("A\n");
else if(c<d) printf("B\n");
else if(c=d) printf("Tie\n");
	return 0;
}
