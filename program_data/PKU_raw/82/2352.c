int main()
{
	int n,i,shousuo[101],shuzhang[101],xiaoshi[101],k=0,t;
scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d%d",&shousuo[i],&shuzhang[i]);
		}
				for(i=0;i<n;i++){
xiaoshi[i]=0;
				}
		for(i=0;i<n;i++){
			if(shousuo[i]<=140&&shousuo[i]>=90&&shuzhang[i]<=90&&shuzhang[i]>=60){
xiaoshi[k]++;
			}else{
k++;
			}
		}
		for(i=0;i<n;i++){
			if(xiaoshi[i]>xiaoshi[0]){
t=xiaoshi[0];
xiaoshi[0]=xiaoshi[i];
xiaoshi[i]=t;
		}
		}
		printf("%d",xiaoshi[0]);
	return 0;
		}


