int main()
{   int n,i,k,many[120],wen,qimo,banji,all,who,max,q;
    char name[120][50],gan,xi;
    scanf("%d",&n);
	max=0;q=0;
    for(i=1;i<=n;i++){
		scanf("%s",&name[i]);
        scanf("%d %d %c %c %d",&qimo,&banji,&gan,&xi,&wen);
		all=0;
        if((qimo>80)&&(wen>=1))  all=all+8000;
        if((qimo>85)&&(banji>80))  all=all+4000;
        if(qimo>90)  all=all+2000;
        if((qimo>85)&&(xi=='Y'))  all=all+1000;
        if((banji>80)&&(gan=='Y'))  all=all+850;
		q=q+all;
		if(all>max){
			max=all;
			who=i;
		}
	}
    printf("%s\n",name[who]);
    printf("%d\n",max);
    printf("%d\n",q);
    return 0;
}


