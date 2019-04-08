char num1[270],num2[270];int i,j,n1,n2;int ans[270]={0},num[270]={0};
void sup(int,int);
int main(void){
	cin>>num1>>num2;
	int n1=strlen(num1),n2=strlen(num2);
	ans[0]=0;
	if(n1>n2){
        for(i=0;i<n1;i++){//???
            ans[i+1]=(int)num1[i]-48;
        }
        for(i=0;i<n2;i++)num[i]=(int)num2[i]-48;//???
    }
	else{
		for(i=0;i<n2;i++){
            ans[i+1]=(int)num2[i]-48;
        }
		for(i=0;i<n1;i++)num[i]=(int)num1[i]-48;
    }
	int n=min(n1,n2);
	int l=max(n1,n2);
	sup(n,l);
	return 0;
}int it;
void sup(int n,int l){
	if(n==0&&l>0){
        for(i=max(strlen(num1),strlen(num2));i>0;i--){
            if(ans[i]>=10){
                ans[i]%=10;ans[i-1]+=1;
            }
        }
        for (i = 0; ans[i] == 0 && max(strlen(num1),strlen(num2)); i++);
        if (i == max(strlen(num1),strlen(num2)))
            cout << 0;
        else {
            for(;i<=max(strlen(num1),strlen(num2));i++)
                cout<<ans[i];
        }
	}
	else if(n==0){
        for (i = 0; ans[i] == 0 && i < max(strlen(num1),strlen(num2)); i++);
		if (i == max(strlen(num1),strlen(num2)))
            cout << 0;
        else {
            for(;i<=max(strlen(num1),strlen(num2));i++)
                cout<<ans[i];
        }
		return;
	}
	else{
		it=ans[l]+num[n-1];
		if(it<10){ans[l]=it;}
		else{
			ans[l]=it%10;ans[l-1]+=1;
		}
		sup(n-1,l-1);
	}
}