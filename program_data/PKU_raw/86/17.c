
int main(int argc, char* argv[])
{
	int n,p[1000][60],q[1000];
	scanf("%d",&n);
	for(int m=0;m<n;m++){
		scanf("%d",&p[m][0]);
		int t;
		t=p[m][0];
		if(t==0) printf("60\n");
		else{
		for(int j=1;j<=t;j++){
			scanf("%d",&p[m][j]);
		}
		int b;
		b=60-3*t-p[m][t];
		if(b>=0){
		q[m]=b+p[m][t];
		printf("%d\n",q[m]);
		}
		else{
			int s,z,h1,h2,l;
			for(int f=1;f<=t;f++){
				s=p[m][f]+3*f;
				if(s>60){
                    h1=p[m][f];
					h2=p[m][f-1];
					z=f;
					for(int g=0;g<=t;g++){
						p[m][g]=-60;
					}
				}
			}
				l=60-3*(z-1)-h2-(h1-h2);
				if(l>=0) q[m]=h1;
				else q[m]=60-3*(z-1);
				printf("%d\n",q[m]);
			}
		}
	}
	return 0;
}

