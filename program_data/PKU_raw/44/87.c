int reverse(int num); 
int main( )
{
	int num[6],i;
	for(i=0;i<6;i++){
		cin >>num[i];
	}
	for(i=0;i<6;i++){
		if(num[i]>=0) cout <<reverse(num[i]) <<endl;
		else cout <<-reverse(-num[i]) <<endl;
	}
	return 0;
}

int reverse(int num)
{
	int i,n,a[20];
	for(i=1;;i++){
		if((num/(int)pow(10.0,i))==0){
			n=i;
			break;
		}
	}
	for(i=1;i<=n;i++){
		a[i]=num/(int)pow(10.0,n-i);
		num=num-a[i]*(int)pow(10.0,n-i);
	}
	num=0;
	for(i=1;i<=n;i++){
		num=num+a[i]*(int)pow(10.0,i-1);
	}
	return num;
}