
int go(int x){

	int y= 0;

	if(x%2== 1)
		y= (x- 1)/ 2;
	else
		y= x/ 2;
	return y;
}

int main(){

	int a[10]= {0}, b[10]= {0}, same= 1, p= 0;

	cin>>a[0]>>b[0];

	int i= 0, j= 0, k= 0;

	while((a[i]> 1) || (b[i]> 1)){
		p= 0;

		for(j= 0; j<= i; j++){
			if(p== 0){
				for(k= 0; k<= i; k++){
					if(a[j]== b[k]){
						same= a[j];
						p= 1;
					}
				}
			}
		}

		a[i+1]= go(a[i]);
		b[i+1]= go(b[i]);
		

		i++;
	}

	cout<<same;

}