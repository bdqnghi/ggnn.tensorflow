int main()
{
	int n,i;
	int u[200];
	int r[200];
	float s[200];
	float k,w,p;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&r[i]);
	}
	for(i=1;i<=n;i++){
		scanf("%d ",&u[i]);
	}
	for(i=1;i<=n;i++){
		if(u[i]>=90){
			s[i]=4.0;
		}else{
			if(u[i]>=85){
				s[i]=3.7;
			}else{
				if(u[i]>=82){
					s[i]=3.3;
				}else{
					if(u[i]>=78){
						s[i]=3.0;
					}else{
						if(u[i]>=75){
							s[i]=2.7;
						}else{
							if(u[i]>=72){
								s[i]=2.3;
							}else{
								if(u[i]>=68){
									s[i]=2.0;
								}else{
									if(u[i]>=64){
										s[i]=1.5;
									}else{
										if(u[i]>=60){
											s[i]=1.0;
										}else{
											s[i]=0;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	k=0;
	p=0;
		for(i=1;i<=n;i++){
			k=k+s[i]*r[i];
			p=p+r[i];
		}
		w=k/p;
		printf("%.2f",w);
		return 0;
	}
		
