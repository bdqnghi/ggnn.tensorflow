int main(int argc, char* argv[])
{int n,score[10],i,grade[10],zongfen=0;
double zong=0,jidian[10];
scanf("%d\n",&n);
for(i=0;i<n-1;i++)
scanf("%d ",&grade[i]);
scanf("%d\n",&grade[n-1]);
for(i=0;i<n-1;i++)
scanf("%d ",&score[i]);
scanf("%d",&score[n-1]);
for(i=0;i<n;i++){
	if(90<=score[i]&&score[i]<=100)
		jidian[i]=4.0*grade[i];
	else if(85<=score[i]&&score[i]<=89)
        jidian[i]=3.7*grade[i];
	else if(82<=score[i]&&score[i]<=84)
		jidian[i]=3.3*grade[i];
	else if(78<=score[i]&&score[i]<=81)
		jidian[i]=3.0*grade[i];
	else if(75<=score[i]&&score[i]<=77)
		jidian[i]=2.7*grade[i];
	else if(72<=score[i]&&score[i]<=74)
		jidian[i]=2.3*grade[i];
	else if(68<=score[i]&&score[i]<=71)
		jidian[i]=2.0*grade[i];
	else if(64<=score[i]&&score[i]<=67)
		jidian[i]=1.5*grade[i];
	else if(60<=score[i]&&score[i]<=63)
		jidian[i]=1.0*grade[i];
	else if(score[i]<60)
		jidian[i]=0*grade[i];
	zong+=jidian[i];
	zongfen+=grade[i];
}
double GPA=zong/zongfen;
printf("%.2lf\n",GPA);
		

	
	return 0;
}
