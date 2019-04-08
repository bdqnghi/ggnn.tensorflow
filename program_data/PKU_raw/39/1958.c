
struct stu
{
	char name[20];
	int final;
	int assess;
	char leader;
	char west;
	int paper;
};

int main(int argc, char* argv[])
{int k,n,i,total[100],tota=0,max=0;
struct stu ppl[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%s %d %d %c %c %d",ppl[i].name,&ppl[i].final,&ppl[i].assess,&ppl[i].leader,&ppl[i].west,&ppl[i].paper);
}
	
for(i=0;i<n;i++)
{total[i]=8000*(ppl[i].final>80&&ppl[i].paper>=1)+
		  4000*(ppl[i].final>85&&ppl[i].assess>80)+
		  2000*(ppl[i].final>90)+
		  1000*(ppl[i].final>85&&ppl[i].west=='Y')+
		  850*(ppl[i].assess>80&&ppl[i].leader=='Y');

tota=tota+total[i];

if(total[i]>max)
	{	
	max=total[i];
	k=i;
	}
}

printf("%s\n%d\n%d\n",ppl[k].name,max,tota);

	return 0;
}

