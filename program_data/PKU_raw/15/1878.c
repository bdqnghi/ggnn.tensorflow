int sz[1000][1000];
int main()
{
int n,i,j,a,b,c,d,e=0,h=0;
scanf("%d",&n);
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		scanf("%d",&(sz[i][j]));
	}
}
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(sz[i][j]==0)	{		
        a=i;
		b=j;
		h=1;
	}
		if(h==1)
			break;
}
	if(h==1)
    break;
}
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(sz[i][j]==0){
			c=i;
		d=j;
		}
	}
}
e=(c-a-1)*(d-b-1);
printf("%d",e);
return 0;
}



