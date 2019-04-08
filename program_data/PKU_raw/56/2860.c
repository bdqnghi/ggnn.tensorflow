int main(){
	int n,e;
	int sz[5];
    scanf("%d",&n);
	sz[1]=n/10000;
	sz[2]=(n-sz[1]*10000)/1000;
	sz[3]=(n-sz[1]*10000-sz[2]*1000)/100;
	sz[4]=(n-sz[1]*10000-sz[2]*1000-sz[3]*100)/10;
	sz[5]=n-sz[1]*10000-sz[2]*1000-sz[3]*100-sz[4]*10;
	if(sz[1]!=0){
		n=sz[5]*10000+sz[4]*1000+sz[3]*100+sz[2]*10+sz[1];
	}
	else if(sz[2]!=0){
		n=sz[5]*1000+sz[4]*100+sz[3]*10+sz[2]*1;
	}
	else if(sz[3]!=0){
		n=sz[5]*100+sz[4]*10+sz[3]*1;
	}
	else if(sz[2]!=0){
		n=sz[5]*10+sz[4]*1;
	}
	else n=n;
	printf("%d",n);
	return 0;
}
