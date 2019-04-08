int main(int argc, char* argv[])
{   int a=1,b=1,c=1,a1=1,b1=1,c1=1,sum=0;
    while(1){
		
	sum=0;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&a1,&b1,&c1);
if(a==0&&b==0&&c==0&&a1==0&&b1==0&&c1==0){break;}
	sum=(12-a)*3600+a1*3600-(b*60)+(b1*60)-c+c1;
    printf("%d\n",sum);
}
	
	return 0;
}
