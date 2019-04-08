
int main() {
	int a, b, c;
	for(a = 0; a < 3; a ++)
		for(b = 0; b < 3; b ++)
			for(c = 0; c < 3; c ++){
				if(((b>a) + (c==a) + (a>b) + (a>c) + (c>b) + (b>a) == 3) && ((b>a)+(c==a))!=
						((a>b)+(a>c)) && ((a+b+c) == 3) && ((b>a) + (c==a) + a == 2))
					cout << (char)('A'+c )<< (char)('A'+a) << (char)('A'+b);
			}
	return 0;
}