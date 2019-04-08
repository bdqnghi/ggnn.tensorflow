
int main(int argc, char* argv[])
{
	int n, xueke[10], fenshu[10], xuekezong=0;
	double zong = 0.0, j;
	scanf("%d\n", &n);
	int i=0;
	while(i<n){
		if(i == (n-1)){
			scanf("%d\n", &xueke[i]);}
		else{
		scanf("%d", &xueke[i]);}
		xuekezong += xueke[i];
		i++;
	}
	i=0;
	while(i<n){
		if(i == (n-1)){
			scanf("%d\n", &fenshu[i]);}
		else{
		scanf("%d\n", &fenshu[i]);}
		if(90<=fenshu[i]){
			zong += xueke[i]*4.0;}
		else{
			if(85<=fenshu[i]){
				zong += xueke[i]*3.7;}
			else{
				if(82<=fenshu[i]){
					zong += xueke[i]*3.3;}
				else{
					if(78<=fenshu[i]){
						zong += xueke[i]*3.0;}
					else{
						if(75<=fenshu[i]){
							zong += xueke[i]*2.7;}
						else{
							if(72<=fenshu[i]){
								zong += xueke[i]*2.3;}
							else{
								if(68<=fenshu[i]){
									zong += xueke[i]*2.0;}
								else{
									if(64<=fenshu[i]){
										zong += xueke[i]*1.5;}
									else{
										if(60<=fenshu[i]){
											zong += xueke[i]*1.0;}}
									}
								}
							}
						}
					}
				}
		}
		i++;
		}
	j = zong / xuekezong;	
	printf("%.2lf\n", j);
	return 0;
}
