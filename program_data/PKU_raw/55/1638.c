
int main()
{
	int a,b,num10=0;
	char pre[200];

int i;
	cin>>a;
	cin>>pre;
	
	cin>>b;
	
	for(i=0;i<strlen(pre);i++)
	{
		int temp=1;
		for(int j=1;j<strlen(pre)-i;j++)
		
			temp*=a;

		if(pre[i]>='0'&&pre[i]<='9')
			num10+=(int)(pre[i]-'0')*temp;
		if(pre[i]>='a'&&pre[i]<='z')
			num10+=(int)(pre[i]-'a'+10)*temp;
		if(pre[i]>='A'&&pre[i]<='Z')
			num10+=(int)(pre[i]-'A'+10)*temp;
		}




char num2[50];
	int j=0;
	int length2=0;
	while(num10>=b){
		if(num10%b<=9){
			num2[j]=num10%b+'0';
		}
		else{
			num2[j]=num10%b-10+'A';
		}
		num10/=b;
		j++;
		length2++;
	}
	if(num10%b<=9){
		num2[j]=num10%b+'0';
	}
	else{
		num2[j]=num10%b-10+'A';
	}
	for(i=length2;i>=0;i--){
		cout<<num2[i];
	}
	cout<<endl;
	return 0;
}
