
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	struct{
		int a;
		char s[26];
	}zuozhe[1000];
	int i, k;
	for(i=0;i<n;i++){
		scanf("%d %s",&zuozhe[i].a, zuozhe[i].s);
	}
	int c[26]={0}, d;
	for(i=0;i<n;i++){
		d=strlen(zuozhe[i].s);
		for(k=0;k<d;k++){
			c[zuozhe[i].s[k]-65]++;
		}
	}
	int f;
	for(i=1;i<26;i++){
		if(c[i]>c[0]){
			f=i;
			d=c[i];
			c[i]=c[0];
			c[0]=d;
		}
	}
	printf("%c\n%d\n",f+65, c[0]);
	for(i=0;i<n;i++){
		d=strlen(zuozhe[i].s);
		for(k=0;k<d;k++){
			if(zuozhe[i].s[k]==f+65)
				printf("%d\n",zuozhe[i].a);
		}
	}
	return 0;
}