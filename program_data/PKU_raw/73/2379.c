/*
 *????HW6_05.cpp
 *??????1100019007?
 *???2012-11-05
 *???????
 */ 
 
int matrix[5][5];
int row[5];
int column[5];//??? 
int main()
{
    int i,j,max,min,flag;//??i,j,max,min 
    flag=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>matrix[i][j];//????
        }
    }
    for(i=0;i<5;i++)
    {
        row[i]=0;//????????
        max=matrix[i][0]; 
        for(j=0;j<5;j++)
        {
            if(matrix[i][j]>max)
            {
                max=matrix[i][j];//???????? 
                row[i]=j;
            }
        }
    }
    for(j=0;j<5;j++)
    {
        column[j]=0;//??????????
        min=matrix[0][j]; 
        for(i=0;i<5;i++)
        {
            if(matrix[i][j]<min)
            {
                min=matrix[i][j];//???????? 
                column[j]=i;
            }
        } 
    }
    for(i=0;i<5;i++)
    {
        if(column[row[i]]==i)//???????????????????? 
        {
            cout<<i+1<<" "<<row[i]+1<<" "<<matrix[i][row[i]]<<endl;//?? 
            flag=1;//flag?????? 
        } 
    }
    if(!flag)cout<<"not found"<<endl;
  return 0;//????
} 
