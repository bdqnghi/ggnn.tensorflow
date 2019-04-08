/*
PG ????????
?? 1000012760
*/


int Prime(int x){
	int y= 1, i= 0;

	(float)x;

	for(i= 2; i<= sqrtf(x); i++){
		if(x%i== 0){
			y= 0;
			break;
		}
	}

	return y;
}
//?????????


int main(){
	
	int n, now, a, b, i= 0, j= 0;
//n??????,now????????,a?b?????now?????,i????

	cin>>n;
//??n

	for(now= 6; now<= n; now++){
		
		if(now% 2== 0){
			for(i= 2; i<= now; i++){
				a= i;
				b= now- i;
				if((Prime(a)== 1) && (Prime(b)== 1))  break;
			}
	
			cout<<now<<"="<<a<<"+"<<b<<endl;
		}		
	}

	return 0;
}