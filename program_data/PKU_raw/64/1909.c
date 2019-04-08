
float ju(int *p,int *q){
float s=0;
int i=0;
for(i=0;i<3;i++){
	s=(*(p)-*(q)) * (*(p)-*(q))+s;
p++,q++;}
return s=sqrt(s);}

int main()
{
    struct s{
		int i;
		int j;
		float l;
	}
	s[100],t;
	
	int n,a[11][3]={0},i,j,p=0,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			s[p].i=i,s[p].j=j,s[p].l=ju(a[i],a[j]),p++;}
	}
	for(i=0;i<p;i++){
		for(j=i+1;j<p;j++){
			if(s[i].l<s[j].l)t=s[i],s[i]=s[j],s[j]=t;
			else if(s[i].l==s[j].l){
			if(s[i].i>s[j].i)t=s[i],s[i]=s[j],s[j]=t;
		    else if(s[i].i==s[j].i&&s[i].j>s[j].j)t=s[i],s[i]=s[j],s[j]=t;
		}
	}
	}

	for(i=0;i<p;i++){
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[s[i].i][0],a[s[i].i][1],a[s[i].i][2],a[s[i].j][0],a[s[i].j][1],a[s[i].j][2],s[i].l);}
}