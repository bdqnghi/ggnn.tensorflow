int main()
{
int n,i,a;
double GPA,num;
double score [10];
int point [10];
scanf("%d",&n);
i=0;
while(i<n){
	scanf("%d",&point [i]);
	i++;
}
i=0;
while(i<n){
	scanf("%lf",&score [i]);
	i++;
}
i=0;
while(i<n){
	if(score [i]>=90){
		score [i]=4.0;
	}else if(score [i]<90&&score [i]>=85){
		score [i]=3.7;
	}else if(score [i]<85&&score [i]>=82){
		score [i]=3.3;
	}else if(score [i]<82&&score [i]>=78){
		score [i]=3.0;
	}else if(score [i]<78&&score [i]>=75){
		score [i]=2.7;
	}else if(score [i]<75&&score [i]>=72){
		score [i]=2.3;
	}else if(score [i]<72&&score [i]>=68){
		score [i]=2.0;
	}else if(score [i]<68&&score [i]>=64){
		score [i]=1.5;
	}else if(score [i]<64&&score [i]>=60){
		score [i]=1.0;
	}else{
		score [i]=0;
	}
	i++;
}
i=0;
num=0;
while(i<n){
	num=(score [i])*(point [i])+num;
	i++;
}
i=0;
a=0;
while(i<n){
	a=(point [i])+a;
	i++;
}
GPA=num/a;
printf("%.2lf\n",GPA);
return 0;
}