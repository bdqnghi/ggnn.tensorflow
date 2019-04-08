int s[3];
char name[]={'A','B','C'};
int main(){
	int a,b,c,an,bn,cn;
	for(a = 1;a < 4;a ++){
		for(b = 1;b < 4;b ++){
			for(c = 1;c < 4;c ++){
				an = (b>a)+(c==a);
				bn = (a>b)+(a>c);
				cn = (c>b)+(b>a);
				if(((a>b)&&(an<bn)||(a<b)&&(an>bn)||(a==b)&&(an==bn))
					&&((a>c)&&(an<cn)||(a<c)&&(an>cn)||(a==c)&&(an==cn))
					&&((c>b)&&(cn<bn)||(c<b)&&(cn>bn)||(c==b)&&(cn==bn))){
					s[0] = a;s[1] = b;s[2] = c;
					for(int i = 0;i < 4;i ++){
						for(int j = 0;j < 3;j ++){
							if(s[j] == i)
								cout << name[j];
						}
					}
				}
			}
		}
	}
	return 0;
}
