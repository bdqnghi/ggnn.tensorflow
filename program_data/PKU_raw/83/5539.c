int main(){
    int t[MAX],n,i;
	double s,p=0,k[MAX],m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf",&k[i]);
	}
    for(i=0;i<n;i++){
		m=m+k[i];
	}
	for(i=0;i<n;i++){
		scanf("%d",&t[i]);
	}
	for(i=0;i<n;i++){
		if(t[i]<60)
			p=p+0*k[i];
		else
			if(t[i]>=60&&t[i]<=63)
			      p=p+1*k[i];
			else
				if(t[i]>=64&&t[i]<=67)
		            	p=p+1.5*k[i];
				else
					if(t[i]>=68&&t[i]<=71)
			               p=p+2*k[i];
					else
						if(t[i]>=72&&t[i]<=74)
			                  p=p+2.3*k[i];
						else
							if(t[i]>=75&&t[i]<=77)
			                       p=p+2.7*k[i];
							else
								if(t[i]>=78&&t[i]<=81)
			                           p=p+3*k[i];
								else
									if(t[i]>=82&&t[i]<=84)
			                               p=p+3.3*k[i];
									else
										if(t[i]>=85&&t[i]<=89)
			                                   p=p+3.7*k[i];
										else
											if(t[i]>=90&&t[i]<=100)
			                                         p=p+4*k[i];
	}
	s=p/m;
	printf("%.2lf",s);
	return 0;
	printf("%lf",m);
	return 0;
}
