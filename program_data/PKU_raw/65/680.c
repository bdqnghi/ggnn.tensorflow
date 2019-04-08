int main(){
int a=0,b=0,n;
int ac[200],bc[200];
scanf("%d\n",&n);
for(int i=0;i<n;i++)
{scanf("%d %d\n",&(ac[i]),&(bc[i]));}
for(int j=0;j<n;j++)
	{if(ac[j]==bc[j]){
		a=a,b=b;}
	else if(ac[j]-bc[j]==-1){
		a=a+1,b=b;}
	else if(ac[j]-bc[j]==2){
		a=a+1,b=b;}
	else{a=a,b=b+1;}
}
if(a==b){printf("Tie");}
else if(a>b){printf("A");}
else{printf("B");}
return 0;
}