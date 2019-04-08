int main(){
	struct s{
		int b,c;
	}a[201];
	int i,n,p=0,q=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&(a[i].b),&(a[i].c));
	for(i=0;i<n;i++){
		if((a[i].b)==1&&(a[i].c)==2)
			p+=1;
		else if((a[i].b)==2&&(a[i].c)==0)
			p+=1;
		else if((a[i].b)==0&&(a[i].c)==1)
			p+=1;
		else if((a[i].b)==1&&(a[i].c)==0)
			q+=1;
		else if((a[i].b)==2&&(a[i].c)==1)
			q+=1;
		else if((a[i].b)==0&&(a[i].c)==2)
			q+=1;
	}
	if(p>q)
		printf("A");
	else if(p<q)
		printf("B");
	else if(p=q)
		printf("Tie");
	return 0;
}