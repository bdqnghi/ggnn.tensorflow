int main(int argc, char* argv[])
{
    int n,a,p,q,g,r;

    g=0;
	r=0;
	int i,j,m;
	scanf("%d",&n);
	if(n<3){
		printf("empty");
	}
	for(i=3;i<=n;i++){
		a=0;
		for(j=2;j<i;j++){
		
			m=i%j;
			if(m==0){
				a++;
			}
		
		}
		
		if(a==0&&g!=0){
			p=q;
			q=i;
			if((q-p)==2){
				printf("%d %d\n",p,q);
				r++;

			}
		}
	    if(a==0&&g==0){
			q=i;
			g++;
			
		}

	}
	if(r==0){
		printf("empty");
	}

	return 0;
}

