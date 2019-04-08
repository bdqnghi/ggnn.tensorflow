
int main()
{
	int n,sp,dp,dur,h=0,max=0;//sp=systolic pressure,dp=diabolic pressure,dur=duration
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d%d",&sp,&dp);
		if(sp>=90&&sp<=140&&dp>=60&&dp<=90){
			h++;
			dur=h;
		}
		else
			dur=h=0;
		if(max>=dur)
			continue;
		else 
			max=dur;
	}
	printf("%d\n",max);
}