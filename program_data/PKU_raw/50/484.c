

int main(int argc, char* argv[])
{
	int w,i;
	int a[12]={12,31,28,31,30,31,30,31,31,30,31,30};
	scanf("%d",&w);
	for(i=0;i<12;i++)
	{
		w=(a[i]+w)%7;
		if(w==5){
			printf("%d\n",(i+1));
		}
	}
	return 0;	


}

