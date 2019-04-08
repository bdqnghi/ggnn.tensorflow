// ?????.cpp : Defines the entry point for the console application.
//


int main(int argc, char* argv[])
{
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
		d+=12;
		printf("%d\n",(d-a)*3600+(e-b)*60+(f-c));
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	}
	return 0;
}

