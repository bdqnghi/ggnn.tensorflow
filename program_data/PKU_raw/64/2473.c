
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int x[10],y[10],z[10];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	}
	float l[46];
	int p1[46];
	int p2[46];
	int zz=0;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			l[zz]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])+(z[i]-z[j])*(z[i]-z[j]));
			p1[zz]=i;
			p2[zz]=j;
			zz++;
		}

	}
	float lamp2;
	int lamp;
	for(i=0;i<zz;i++){
		for(j=i+1;j<zz;j++){
			if(l[j]>l[i]){
				lamp2=l[j];
				l[j]=l[i];
				l[i]=lamp2;
				lamp=p1[j];
				p1[j]=p1[i];
				p1[i]=lamp;
				lamp=p2[j];
				p2[j]=p2[i];
				p2[i]=lamp;
			}
			if(l[j]==l[i]){
				if(p1[i]>p1[j]||(p1[i]==p1[j]&&p2[i]>p2[j])){
				lamp2=l[j];
				l[j]=l[i];
				l[i]=lamp2;
				lamp=p1[j];
				p1[j]=p1[i];
				p1[i]=lamp;
				lamp=p2[j];
				p2[j]=p2[i];
				p2[i]=lamp;
			}}
		}
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",x[p1[i]],y[p1[i]],z[p1[i]],x[p2[i]],y[p2[i]],z[p2[i]],l[i]);
	}

	return 0;
}
