int main()
{
	int i,a,b,c,d,e,f,n=0;
	for(i=0; ;i++){
		scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
		n=((d+11-a)*3600+e*60+f+3600-b*60-c);
                  printf("%d\n",n);
	}
	
	return 0;
}

