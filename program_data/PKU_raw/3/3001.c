int main(){
int n;
int k;
scanf("%d %d",&n,&k);
int s[1000];
for(int a=0;a<n;a++){
    scanf("%d",&(s[a]));
}
int b;
for(int c=0;c<n;c++){
for(int i=0;i<n;i++){
    b=s[c]+s[i];
	if(b==k){
	printf("yes");
	return 0;
	}
}
}
printf("no");
return 0;
}