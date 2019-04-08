int i,j;
int len1,len2;
void f(char a[255],char b[255]){//???????
	int c[255];//???????
	if(len1>len2){//???????
		for(i=0;i<=len2-1;i++){
			c[i]=a[len1-1-i]+b[len2-1-i]-'0' -'0';//?????
			if(c[i]>=10){//??????
				c[i]-=10;
				a[len1-i-2]+=1;}//??
			}
		for(i=len2;i<=len1-2;i++){
			c[i]=a[len1-i-1]-'0';
		if(c[i]>=10){//??? ????
			c[i]-=10;
			a[len1-i-2]+=1;}
		}
		c[len1-1]=a[0]-'0';//?????
		if(c[len1-1]>=10){
			c[len1-1]-=10;
			c[len1]=1;
			j=len1;}//????
		else j=len1-1;
		int x=0,y=0;//???????
		for(i=j;i>=0;i--){//????
			if(c[i]==0&&x==0) continue;//????0
			else{
			cout << c[i];
			x=1;y=1;}}
		if(y==0)cout <<"0"<<endl;//???0???
	}
	else{//???????
		for(i=0;i<=len1-2;i++){
			c[i]=a[len1-1-i]+b[len2-1-i]-'0'-'0';
			if(c[i]>=10){
							c[i]-=10;
							a[len1-i-2]+=1;}
		}
		c[len1-1]=a[0]+b[0]-'0'-'0';
		if(c[len1-1]>10) {c[len1]=1;c[len1-1]-=10;j=len1;}
		else j=len1-1;
		int  x=0,y=0;
		for(i=j;i>=0;i--){
			if(c[i]==0&&x==0) continue;
			else{
			cout << c[i];
			x=1;y=1;}}
		if(y==0)cout <<"0"<<endl;
	}
}
int main(){//?????
	char a[255],b[255];
	cin >> a >> b;//??
	len1=strlen(a);
	len2=strlen(b);
	if(len1>=len2)//????????????
	f(a,b);
	else{//???????
		int y;
		y=len1;len1=len2;len2=y;
		f(b,a);
	}
	return 0;
}
