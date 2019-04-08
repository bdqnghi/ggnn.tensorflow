
void bubble_sort(int a[],int n)
{
	int i,k,t;
	for (k=n-1;k>0;k--){
		for (i=0;i<k;i++){
			if (a[i]<a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
}


int main()
{
	int n;
	int shousuo,shuzhang;
	int i,j,k;
	int a[100];
	int b[100];
	scanf("%d",&n);
	j=0;
	for (i=0;i<100;i++){
		a[i]=0;
		b[i]=0;
	}
	for (i=0;i<n;i++){
		scanf("%d%d",&shousuo,&shuzhang);
		if (shousuo>=90&&shousuo<=140&&shuzhang>=60&&shuzhang<=90) a[i]=1;
			else a[i]=0;
	}
    for (i=0;i<n;i++){
		switch(a[i]){
		    case 1:
            b[j]++;
			break;
			default:
				j++;
		}
	}
    bubble_sort(b,99);
	printf("%d",b[0]);
	return 0;
}
