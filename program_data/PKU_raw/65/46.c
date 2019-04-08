int main(){
	int a,b;
	int n,c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if(a==b){c=c;}
		else if(a-b==1){c=c-1;}
		else if(b-a==1){c+=1;}
		else if(a-b==2){c+=1;}
		else if(b-a==2){c=c-1;}
	}
	if(c>0){printf("A");}
	else if(c<0){printf("B");}
	else{printf("Tie");}
return 0;
}

