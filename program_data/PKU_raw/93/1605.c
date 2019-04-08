int main(){
    int n,i;
	cin>>n;
	int a[3];
	i=3;
	a[0]=n%i;
	i=5;
	a[1]=n%i;
	i=7;
	a[2]=n%i;
	if(a[0]==0&&a[1]!=0&&a[2]!=0){printf("3");}
	else if(a[0]==0&&a[1]==0&&a[2]!=0){printf("3 5");}
	else if(a[0]==0&&a[1]==0&&a[2]==0)printf("3 5 7");
	else if(a[0]!=0&&a[1]==0&&a[2]==0)printf("5 7");
	else if(a[0]!=0&&a[1]==0&&a[2]!=0)printf("5");
	else if(a[0]!=0&&a[1]!=0&&a[2]==0)printf("7");
    else if(a[0]==0&&a[1]!=0&&a[2]==0)printf("3 7");
	else printf("n");
	
	return 0;
}