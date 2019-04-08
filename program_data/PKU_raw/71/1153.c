int main()
{   
	int i,max,min,j,k,n,y,a,b,s,day1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},day2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	scanf("%d",&n);
	for(i=0;i<n;i++){s=0;
		scanf("%d%d%d",&y,&a,&b);
		if(a>b){max=a;min=b;}
		else if(a<b){max=b;min=a;}
		if((y%4==0)&&(y%100!=0)||(y%400==0)){
			for(j=min;j<max;j++){s+=day2[j];}
			}
		else {
			for(k=min;k<max;k++){s+=day1[k];}
		}
		if(s%7==0){printf("YES\n");}
		else if(s%7!=0){printf("NO\n");}
		}
		return 0;
	}