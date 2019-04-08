
int main(int argc, char* argv[])
{
    int n,i,j,k,f;
    int	year[200],mon1[200],day,mon2[200],t1,t2;
	scanf("%d",&n);
    for (i=0;i<n;i++)
	{
		scanf("%d%d%d",&year[i],&mon1[i],&mon2[i]);
	}
	for (i=0;i<n;i++)
	{	
		if(((year[i]%4==0)&&(year[i]%100!=0))||(year[i]%400==0))
		{
			f=29;
		}
		else{f=28;}

        t1=0;
		t2=0;
		for (j=1;j<mon1[i];j++)
		{
			if(j==1||j==3||j==5||j==7||j==8||j==10){
				day=31;}
			else 
			{
				if(j==2){
				day=f;}
			    else{day=30;}
			}
			t1=t1+day;
		}
        for (k=1;k<mon2[i];k++)
		{
			if(k==1||k==3||k==5||k==7||k==8||k==10){
				day=31;}
		    else 
			{
				if (k==2){
				day=f;}
			    else{ day=30;}
			}
			t2=t2+day;
		}
		if(((t2-t1)%7==0)||((t1-t2)%7==0)){
			printf("YES\n");}
		else{
			printf("NO\n");}

    }
	return 0;
}

