int a[4];
char name[]={'z','q','s','l'};
int main(){
	int z,q,s,l;
	for(z = 10;z <= 50; z += 10){
		for(q = 10;q <= 50; q += 10){
			if(q == z)	continue;
			for(s = 10;s <= 50; s += 10){
				if(s == z || s == q)	continue;
				for(l = 10;l <= 50; l += 10){
					if(l == z || l == q || l == s)	continue;
					if(((z+q)==(s+l))&&((z+l)>(s+q))&&((z+s)<q)){
						a[0] = z;a[1] = q;a[2] = s;a[3] = l;
						for(int i = 50;i > 0;i -= 10){
							for(int j = 0;j < 4;j ++){
								if(a[j] == i)
									cout << name[j] << ' ' << i << endl;
							}
						}
						return 0;
					}
				}
			}
		}
	}
	return 0;
}