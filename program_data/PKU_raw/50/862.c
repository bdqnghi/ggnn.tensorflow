int main()
{
    int w;
    int week[11];
    int i;
    scanf("%d", &w);
    week[0]=w;
    week[1]=(week[0]+3)%7;
    week[2]=week[1];
    week[3]=(week[2]+3)%7;
    week[4]=(week[3]+2)%7;
    week[5]=(week[4]+3)%7;
    week[6]=(week[5]+2)%7;
    week[7]=(week[6]+3)%7;
    week[8]=(week[7]+3)%7;
    week[9]=(week[8]+2)%7;
    week[10]=(week[9]+3)%7;
    week[11]=(week[10]+2)%7;
    for(i=0;i<12;i++)
    {
        if(week[i]==0)
            week[i] = week[i] + 7;
    }
    for(i=0;i<12;i++)
    {
        if(week[i]==7)
            printf("%d\n", i+1);
    }
	return 0;
}
