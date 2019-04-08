int main() {
	int n;
	scanf("%d", &n);
	int first[NUMBER];
	int second[NUMBER];
	int i=0;
	int j,k;
	int x,p;
	int y,q;
	while(i<n){
		scanf("%d %d", &first[i],&second[i]);
		i++;
	}
	for(j=(n-1);j>0;j--){
		for(k=0;k<j;k++){
			if(first[k]>first[k+1]){
				int tmpfirst;
				int tmpsecond;
				tmpfirst=first[k];
				tmpsecond=second[k];
				first[k]=first[k+1];
				second[k]=second[k+1];
				first[k+1]=tmpfirst;
				second[k+1]=tmpsecond;

			}
		}
	}
	i=0;
	while(i<n){
		p=0;
        x=second[0];
		while(p<=i){
			
			if(second[p]>=x){
				x=second[p];
				p++;
		}
			else{
				p++;
			}
		}
		if(first[i+1]<=x){
			i++;
			continue;
			
		}
		else{
			break;
		}
	}
	q=0;
	y=second[0];
	while(q<n){
           if(second[q]>=x){
				y=second[q];
				q++;
		}
			else{
				q++;
			}

	}
	if(i==n){
		printf("%d %d", first[0], y);
	}
	else{
		printf("no");
	}
		return 0;
	}