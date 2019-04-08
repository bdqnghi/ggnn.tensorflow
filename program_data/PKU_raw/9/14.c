
int main()
{
	int n,i,j,t,x[110],k,x2[110];
	char id[110][20], temp[20], id2[100][20];
	scanf("%d", &n);
	k=0;
	for (i=1;i<=n;i++){
		scanf("%s %d" , &id[i],&x[i]);
		if (x[i]>=60){
			k++;
			x2[k] = x[i];
			strcpy(id2[k],id[i]);
		}
	}
	for (i=1;i<=k;i++){
		for (j=k;j>i;j--){
			if (x2[j]>x2[j-1]){
				t = x2[j];
				x2[j] = x2[j-1];
				x2[j-1] = t;
				strcpy(temp,id2[j]);
				strcpy(id2[j],id2[j-1]);
				strcpy(id2[j-1],temp);
			}
		}
	}
	for (i=1;i<=k;i++){
		printf("%s\n", id2[i]);
	}
	for (i=1;i<=n;i++){
		if (x[i]<60)
			printf("%s\n", id[i]);
	}

	return 0;
}

