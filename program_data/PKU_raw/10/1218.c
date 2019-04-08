int a[26],sum[26],imax[26];
int c,j;

int main(){
	int i;
	int find(int max,int q);
	
	scanf("%d\n",&c);
	for (i=1;i<=c;i++){
		scanf("%d",&a[i]);
	}
	printf("%d",find(10000,1));
};
int find(int max,int q){
	int i;
	imax[q]=0;
	if (q!=c) 
	{
		for (i=q;i<=c;i++){
			sum[q]=0;
			if (max>=a[i]) sum[q]=1+find(a[i],i+1);
			if (max<a[i]) sum[q]=find(max,i+1); 
			if (sum[q]>imax[q]) imax[q]=sum[q];
		}
		return imax[q];
	}
	else if (q=c && max>=a[q]) return 1;
	else if (q=c && max<a[q]) return 0;
	
}