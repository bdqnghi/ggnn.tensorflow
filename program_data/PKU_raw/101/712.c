int main(){
	int A,B,C,a,b,c;
	A = B = C = 0;
	for(a = 0;a < 3;a ++){
		for(b = 0;b < 3;b ++){
			if(a == b)continue;
			for(c = 0;c < 3;c ++){
				if(a == c || b == c)continue;
				A = B = C = 0;
				if(b > a)A ++;
				if(b == a)A ++;
				if(a > b)B ++;
				if(a > c)B ++;
				if(c > b)C ++;
				if(b > a)C ++;
				if((A + a == B + b) && (A + a == C + c)){
					if(a == 0)cout<<'A';
					if(b == 0)cout<<'B';
					if(c == 0)cout<<'C';
					if(a == 1)cout<<'A';
					if(b == 1)cout<<'B';
					if(c == 1)cout<<'C';
					if(a == 2)cout<<'A';
					if(b == 2)cout<<'B';
					if(c == 2)cout<<'C';
				}
			}
		}
	}
	return 0;
}