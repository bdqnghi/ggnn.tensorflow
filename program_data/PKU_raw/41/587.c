//?????
//??? 1200017623
//???????????


int main(){
	int a,b,c,d,e,word[6];
	for(a = 1;a <= 5;a++){
		for(b = 1;b <=5;b++){
			if(a == b)continue;
			for(c = 1;c <= 5;c++){
				if(a == c || b == c)continue;
				for(d = 1;d <= 5;d++){
					if(a == d||b == d||c == d)continue;
					e = 15 - a - b - c - d;
					if(e == 2 || e == 3)continue;
					word[a] = (e == 1);                 //a????A??????
					word[b] = (b == 2);
					word[c] = (a == 5);
					word[d] = (c != 1);
					word[e] = (d == 1);
					if(word[1] && word[2] && !word[3] && !word[4] && !word[5]){
						printf("%d %d %d %d %d\n",a,b,c,d,e);break;
					}
				}
			}
		}
	}
	return 0;
}
