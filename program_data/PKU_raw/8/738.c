/*1200012866 ??? 11.16*/
int a[2000]={0},b[1000]={0};

void read(){	
	int x,y;
	cin>>x>>y;
	for(int i=0;i<x;i++)
		cin>>a[i];
	for(int i=0;i<y;i++)
		cin>>b[i];
}
void paixu(int z[]){
	int c;
	for(int i=0;z[i+2]!=0;i++)
		for(int j=0;z[j+1]!=0;j++)//????????
			if(z[j]>z[j+1]){
				c=z[j];
				z[j]=z[j+1];
				z[j+1]=c;
			}
}
void addd(int x[],int y[]){
	int q=0;
	while(x[q]!=0){
		q++;
	}
	for(int z=0;y[z]!=0;z++)
		x[q+z]=y[z];
}
void shuchu(int x[]){
	for(int z=0;x[z]!=0;z++)
		if(!z)
			cout<<x[z];
		else
			cout<<' '<<x[z];
}
int main(){
	read();
	paixu(a);
	paixu(b);
	addd(a,b);
	shuchu(a);
	return 0;
}