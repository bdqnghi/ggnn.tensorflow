int main()
{
char a[11],b[4],out[14];
int i,j,k;
char *p;
while(cin){
	int temp=0,len;
	cin.get(a,11,' ');
	len=strlen(a);
	cin.get();
	cin.get(b,4,'\n');
	p=a;
	for(i=0;i<=len-1;i++){
		if(*(p+temp)<*(p+i)){
			temp=i;
	   }
	}
	for(j=0;j<=temp;j++){	
		out[j]=a[j];
	}
	for(j=temp+1;j<=temp+3;j++){
		out[j]=b[j-temp-1];
	}
	for(j=temp+4;j<=13;j++){
		out[j]=a[j-3];
	}
	cout<<out<<endl;
}

	   return 0;

}