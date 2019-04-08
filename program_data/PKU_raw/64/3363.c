int main() {
	int n;
	int a[10][3];
	int i,j;
	int b[100][2];
	double s[100];
	scanf("%d", &n);
	for(i=0;i<n;i++) {
		scanf("%d%d%d",&(a[i][0]), &(a[i][1]), &(a[i][2]));
	}
	int k=0;
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++) {
			s[k] = sqrt(pow(a[i][0]-a[j][0],2)+pow(a[i][1]-a[j][1],2)+pow(a[i][2]-a[j][2],2));
			b[k][0] = i;
			b[k][1] = j;
			k++;
		}
	}
	for(i=1; i<k; i++) {
		for(j=0;j<k-i;j++) {
			if(s[j] < s[j+1]) {
				double t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
				
				int tt=b[j][0];
				b[j][0]=b[j+1][0];
				b[j+1][0]=tt;
				
				tt=b[j][1];
				b[j][1]=b[j+1][1];
				b[j+1][1]=tt;
			}
		}
	}
	for(i=0;i<k;i++) {
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", a[b[i][0]][0], a[b[i][0]][1], a[b[i][0]][2], a[b[i][1]][0], a[b[i][1]][1], a[b[i][1]][2], s[i]);
	}
				
	return 0;
}