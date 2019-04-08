char a[300],b[300];
int c[300]={0};
int main(){
	cin.getline(a,300);
	cin.getline(b,300);
	int num1,num2,num=0,flag=0;
	num1=strlen(a);
	num2=strlen(b);
	if(num1>=num2){
		for(int j=num2-1;j>=0;j--){
			c[num]+=a[j+num1-num2]-'0'+b[j]-'0';
			if(c[num]>=10){
				c[num]-=10;
				c[num+1]+=1;
			}
			num++;
		}
		for(int i=num1-num2-1;i>=0;i--){
			c[num]+=a[i]-'0';
			if(c[num]>=10){
				c[num]-=10;
				c[num+1]+=1;
			}
			num++;
		}
		if(c[num]==0){
			for(int i=(num-1);i>=0;i--){
				if(c[i]!=0) flag=1;
				if(flag==1) cout<<c[i];
			}
			if(flag==0) cout<<"0"<<endl;
		}
		else
			for(int i=(num);i>=0;i--)
				cout<<c[i];
	}
	else{
		for(int j=num1-1;j>=0;j--){
			c[num]+=b[j+num2-num1]-'0'+a[j]-'0';
			if(c[num]>=10){
				c[num]-=10;
				c[num+1]+=1;
			}
			num++;
		}
		for(int i=num2-num1-1;i>=0;i--){
			c[num]+=b[i]-'0';
			if(c[num]>=10){
				c[num]-=10;
				c[num+1]+=1;
			}
			num++;
		}
		if(c[num]==0)
			for(int i=(num-1);i>=0;i--){
				if(c[i]!=0) flag=1;
				if(flag==1) cout<<c[i];
			}
		else
			for(int i=(num);i>=0;i--)
				cout<<c[i];
	}
	return 0;
}