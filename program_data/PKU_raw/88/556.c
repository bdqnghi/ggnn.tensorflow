
int main() {
	char a[31];
	char *p=a;
	int i=0;
	cin.getline(a,31);
	for(i=0;i<strlen(a);i+=1){
		if(*(p+i)>47&&*(p+i)<58)
			cout<<*(p+i);
		else if((*(p+i)<=47||*(p+i)>=58)&&(*(p+i+1)>47&&*(p+i+1)<58))
			    cout<<endl;
	}
	return 0;
}