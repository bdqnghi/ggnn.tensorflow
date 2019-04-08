int main()
{
    int n,d=0;
	int shuzu[5000][6];
	for(n=0;n<5000;n++){
		for(int a=0;a<6;a++){
			scanf("%d",&shuzu[n][a]);
		}
		d++;
		if(shuzu[n][0]==0){
			break;
		}
	}
	int shu[5000];
	for(int b=0;b<d-1;b++){
		shu[b]=(shuzu[b][3]+12-shuzu[b][0])*3600;
		shu[b]=shu[b]+shuzu[b][4]*60+shuzu[b][5]-shuzu[b][1]*60-shuzu[b][2];
	}
	for(int c=0;c<d-1;c++){
		printf("%d\n",shu[c]);
	}
	return 0;
}