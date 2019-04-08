struct student
{
    int num;
    int yw;
    int sx;
    int he;
}student[100000];

int main()
{
    int i,n,j,s=0,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&student[i].num,&student[i].yw,&student[i].sx);
        student[i].he=student[i].yw+student[i].sx;
    }
    for(i=0;i<n;i++)
    {m=student[0].he;
        for(j=n-1;j>0;j--)
        {
            
            m=student[j].he>m?student[j].he:m;
        }
        
        for(j=0;j<n;j++)
        {
            if(student[j].he==m)
            {printf("%d %d\n",student[j].num,student[j].he);
			student[j].he=0;s=s+1;if(s==3)
            {goto guiyi;}}
            
        }
		       
    }
	guiyi: return 0;
    
}