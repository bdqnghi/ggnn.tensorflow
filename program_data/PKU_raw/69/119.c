int max(int a,int b);
void change();
int main()
{
	char a[210]={'0'},b[210]={'0'};
	int plusa[210]={0},plusb[210]={0},sum[210]={0},lena=0,lenb=0,len=0,i,j,maxpoint=0;
	cin>>a>>b;
	lena=strlen(a);
	lenb=strlen(b);
	for(i=0,j=lena-1;j>=0;j--){
		plusa[i++]=a[j]-'0';
	}
	for(i=0,j=lenb-1;j>=0;j--){
		plusb[i++]=b[j]-'0';
	}
	len=max(lena,lenb);
	for(i=0;i<len;i++){
		sum[i]=plusa[i]+plusb[i];
	}
	for(i=0;i<len;i++){
		if(sum[i]>=10){
			sum[i+1]=sum[i+1]+sum[i]/10;
			sum[i]=sum[i]%10;
		}
	}
	for(i=210-1;i>=0;i--){
		if(sum[i]!=0){
			maxpoint=i;
			break;
		}
	}
	for(i=maxpoint;i>=0;i--)
		cout<<sum[i];

	return 0;
}
int max(int a,int b)
{
	if(a>=b)return a;
	else return b;
}