#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
	int a,b,c,diff,score,es;
	float quesnum,pect,ntime,st,endt,nt;
	double pec;
	score=0;
	cout<<"你想答什么样的难度？打1是简单，2中等，3困难，但是我劝你别选4"<<endl;
	//cin>>diff; //test
	scanf("%1d",&diff);
	system("cls");
	//cout<<diff;   //test
	if (diff==1)
	{
		es=10;
		printf("%s\n","简单模式"); 
	}
	if (diff==2)
	{
		es=100;
		printf("%s\n","普通模式"); 
	}
	if (diff==3)
	{
		es=1000;
		printf("%s\n","困难模式");
	}
	if (diff==4)
	{
		es=100000;
		printf("%s\n","怎么，想不开了？");
	} 
	
	if (diff!=1&&diff!=2&&diff!=3&&diff!=4)
	{
		printf("%s\n","你在开玩笑吗？请输入正确的代号！已默认为中等难度！");
		es=100 ;
	}
	Sleep(700);
	system("cls");
	cout<<"你想答几题？答一题得一分"<<endl;
	//cout<<"diffset="<<es;   //test
	cin>>quesnum; 
	//time_t start,end;
	//start=clock();
	system("cls");
	st=GetTickCount();
	for(int i=1;i<=quesnum;i+=1)
	{
		
		srand(time(NULL));
		a=rand()%es+1;
		b=rand()%es+1;
		printf("%d%s%d%s\n",a,"+",b,"=?");
		//scanf("%d",c);
		cin>>c;
		if (c==a+b)
			{
				printf("%s\n","正确");
				score=score+1;
				//ntime=clock();
				//cout<<(ntime-start);
				pec=float(score)/quesnum;
				pect=pec*100;
				nt=GetTickCount(); 
				printf("%s %d%s%.2f%s%.2f%s\n","你当前分数为",score,",已用时",(nt-st)/1000,"秒,正确率为",pect,"%"); 
				Sleep(300);
				system("cls");
			}
		else
			{
				printf("%s\n","错误");
				//just a test copy//score=score+1;
				ntime=clock();
				//cout<<(ntime-st);
				pec=float(score)/quesnum;
				nt=GetTickCount(); 
				printf("%s %d%s%.2f%s%.2f%s\n","你当前分数为",score,",已用时",(nt-st)/1000,"秒,正确率为",pect,"%"); 
				Sleep(300);
				system("cls");
			}
	} 
	endt=GetTickCount(); 
	score=float(score);
	pec=score/quesnum; 
	pect=pec*100;
	printf("%s%.0f%s%d%s%.2f%s%.2f%s","你已完成",quesnum,"题，得分为",score,",正确率为",pect,"%,总用时为",(endt-st)/1000,"秒");
	Sleep(5000);
	system("exit");
	
	return 0;
} 
