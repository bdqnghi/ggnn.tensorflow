int main()
{   int a,ans[4],i,all;
	scanf("%d",&a);
	for(i=1;i<=3;i++)ans[i]=0;
	all=0;
    if((a%3)==0) ans[1]=3;
	if((a%5)==0) ans[2]=5;
    if((a%7)==0) ans[3]=7;
    for(i=1;i<=3;i++){
		if((ans[i]!=0)&&(all!=0)){printf(" %d",ans[i]);
                    all++;
		}
		if((ans[i]!=0)&&(all==0)){printf("%d",ans[i]);
                    all++;
		}


	}
    if(all==0) printf("n");
    return 0;
}
