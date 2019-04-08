int main()
{
	int n,i,year[200],mon1[200],mon2[200];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d %d %d",&year[i],&mon1[i],&mon2[i]);
	}
	
	for(i=1;i<=n;i++)
	{
		if( (year[i]%100!=0) && (year[i]%4==0) || year[i]%400==0  )
		{
			
		if(mon1[i]==1) { mon1[i]=1; }
		if(mon1[i]==2) { mon1[i]=32; }
        if(mon1[i]==3) { mon1[i]=61; }
        if(mon1[i]==4) { mon1[i]=92; }
        if(mon1[i]==5) { mon1[i]=122; }
        if(mon1[i]==6) { mon1[i]=153; }
        if(mon1[i]==7) { mon1[i]=183; }
        if(mon1[i]==8) { mon1[i]=214; }
        if(mon1[i]==9) { mon1[i]=245; }
        if(mon1[i]==10) { mon1[i]=275; }
        if(mon1[i]==11) { mon1[i]=306; }
        if(mon1[i]==12) { mon1[i]=336; }
        if(mon2[i]==1) { mon2[i]=1; }
		if(mon2[i]==2) { mon2[i]=32; }
        if(mon2[i]==3) { mon2[i]=61; }
        if(mon2[i]==4) { mon2[i]=92; }
        if(mon2[i]==5) { mon2[i]=122; }
        if(mon2[i]==6) { mon2[i]=153; }
        if(mon2[i]==7) { mon2[i]=183; }
        if(mon2[i]==8) { mon2[i]=214; }
        if(mon2[i]==9) { mon2[i]=245; }
        if(mon2[i]==10) { mon2[i]=275; }
        if(mon2[i]==11) { mon2[i]=306; }
        if(mon2[i]==12) { mon2[i]=336; }
        if(((mon2[i]-mon1[i])%7==0) || ((mon1[i]-mon2[i])%7==0)) { printf("YES\n"); }
		else { printf("NO\n");}
		}
	    else
		{
        if(mon1[i]==1) { mon1[i]=1; }
		if(mon1[i]==2) { mon1[i]=32; }
        if(mon1[i]==3) { mon1[i]=60; }
        if(mon1[i]==4) { mon1[i]=91; }
        if(mon1[i]==5) { mon1[i]=121; }
        if(mon1[i]==6) { mon1[i]=152; }
        if(mon1[i]==7) { mon1[i]=182; }
        if(mon1[i]==8) { mon1[i]=213; }
        if(mon1[i]==9) { mon1[i]=244; }
        if(mon1[i]==10) { mon1[i]=274; }
        if(mon1[i]==11) { mon1[i]=305; }
        if(mon1[i]==12) { mon1[i]=335; }
        if(mon2[i]==1) { mon2[i]=1; }
		if(mon2[i]==2) { mon2[i]=32; }
        if(mon2[i]==3) { mon2[i]=60; }
        if(mon2[i]==4) { mon2[i]=91; }
        if(mon2[i]==5) { mon2[i]=121; }
        if(mon2[i]==6) { mon2[i]=152; }
        if(mon2[i]==7) { mon2[i]=182; }
        if(mon2[i]==8) { mon2[i]=213; }
        if(mon2[i]==9) { mon2[i]=244; }
        if(mon2[i]==10) { mon2[i]=274; }
        if(mon2[i]==11) { mon2[i]=305; }
        if(mon2[i]==12) { mon2[i]=335; }
        if(((mon2[i]-mon1[i])%7==0)||((mon1[i]-mon2[i])%7==0)){	printf("YES\n"); }
		else { printf("NO\n");}
		}
	}
	return 0;
}