

int main()
{
int num;
cin>>num;
int graphic[100][100];//??????
int i=0,j=0,rightEst,bottumEst;//???????
int width=0,lengh=0;
for(i=0;i<num;i++)
{
for(j=0;j<num;j++)
{
scanf("%d",&graphic[i][j]);
if(graphic[i][j]==0){
rightEst=i;bottumEst=j;//???????
}
}
}
for(i=rightEst,j=bottumEst;i>=0;i--){//???
if(graphic[i][j]==0) width++;
else break;
}
for(i=rightEst,j=bottumEst;j>=0;j--){//???
if(graphic[i][j]==0) lengh++;
else break;
}
int portation=width*lengh-width*2-(lengh-2)*2;//?????????

cout <<portation<< endl;
return 0;
}
