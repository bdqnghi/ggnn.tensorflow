int main(int argc, char* argv[])
{
	int n,i,x,a=0,b=0,c=0,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x<=18){
			a++;
		}
		else if(x>=19&&x<=35){
			b++;
		}
		else if(x>=36&&x<=60){
			c++;
		}
		else if(x>=61){
			d++;
		}
	}
	printf("1-18: %.2lf%%\n",(double)100*a/n);
    printf("19-35: %.2lf%%\n",(double)100*b/n);
    printf("36-60: %.2lf%%\n",(double)100*c/n);
    printf("60??: %.2lf%%\n",(double)100*d/n);
    return 0;

}

