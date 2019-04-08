int main()
{
	int n,i,sz[100];
	int a=0,b=0,c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&(sz[i]));
	}
	for(i=0;i<n;i++){
		if(sz[i]>0&&sz[i]<19){
			a++;
		}
		if(sz[i]>18&&sz[i]<36){
			b++;
		}
		if(sz[i]>35&&sz[i]<61){
			c++;
		}
		if(sz[i]>60){
			d++;
		}
	}
	printf("1-18: %.2f%%\n",a*1.0/n*100.0);
    printf("19-35: %.2f%%\n",b*1.0/n*100.0);
    printf("36-60: %.2f%%\n",c*1.0/n*100.0);
    printf("60??: %.2f%%\n",d*1.0/n*100.0);
	return 0;
}