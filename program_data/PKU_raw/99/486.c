int main()
{
	int n,s[100],i,a=0,b=0,c=0,d=0;
	double n1,n2,n3,n4;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++){
		if(s[i]<19){
			a+=1;
		}
		else if(s[i]>18&&s[i]<36){
			b+=1;
		}
		else if(s[i]>35&&s[i]<61){
			c+=1;
		}
		else if(s[i]>60){
			d+=1;
		}
	}
	n1=(double)a*100/n;
	n2=(double)b*100/n;
	n3=(double)c*100/n;
	n4=(double)d*100/n;
	printf("1-18: %.2lf%%\n",n1);
	printf("19-35: %.2lf%%\n",n2);
	printf("36-60: %.2lf%%\n",n3);
	printf("60??: %.2lf%%",n4);
	return 0;
}