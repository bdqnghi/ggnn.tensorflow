int main(int argc, char* argv[])
{
	char p[50],q[50];
	scanf("%s %s",p,q);
    int m,n;
	m=strlen(p);
	n=strlen(q);
	int i,t;
	for(i=0;i<n;i++){
		int b=0;
		t=i;
        for(int j=0;j<m;j++){
			if(p[j]==q[t]) b++;
			else b=b;
			t++;
		}
		if(b==m) {
			printf("%d",t-m);
			for(int h=0;h<m;h++){
				p[h]='1';
			}
		}
	}
	return 0;
}
