#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int main()
{
	int a,b,c,diff,score,es;
	float quesnum,pect,ntime,st,endt,nt;
	double pec;
	score=0;
	cout<<"�����ʲô�����Ѷȣ���1�Ǽ򵥣�2�еȣ�3���ѣ�������Ȱ���ѡ4"<<endl;
	//cin>>diff; //test
	scanf("%1d",&diff);
	system("cls");
	//cout<<diff;   //test
	if (diff==1)
	{
		es=10;
		printf("%s\n","��ģʽ"); 
	}
	if (diff==2)
	{
		es=100;
		printf("%s\n","��ͨģʽ"); 
	}
	if (diff==3)
	{
		es=1000;
		printf("%s\n","����ģʽ");
	}
	if (diff==4)
	{
		es=100000;
		printf("%s\n","��ô���벻���ˣ�");
	} 
	
	if (diff!=1&&diff!=2&&diff!=3&&diff!=4)
	{
		printf("%s\n","���ڿ���Ц����������ȷ�Ĵ��ţ���Ĭ��Ϊ�е��Ѷȣ�");
		es=100 ;
	}
	Sleep(700);
	system("cls");
	cout<<"������⣿��һ���һ��"<<endl;
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
				printf("%s\n","��ȷ");
				score=score+1;
				//ntime=clock();
				//cout<<(ntime-start);
				pec=float(score)/quesnum;
				pect=pec*100;
				nt=GetTickCount(); 
				printf("%s %d%s%.2f%s%.2f%s\n","�㵱ǰ����Ϊ",score,",����ʱ",(nt-st)/1000,"��,��ȷ��Ϊ",pect,"%"); 
				Sleep(300);
				system("cls");
			}
		else
			{
				printf("%s\n","����");
				//just a test copy//score=score+1;
				ntime=clock();
				//cout<<(ntime-st);
				pec=float(score)/quesnum;
				nt=GetTickCount(); 
				printf("%s %d%s%.2f%s%.2f%s\n","�㵱ǰ����Ϊ",score,",����ʱ",(nt-st)/1000,"��,��ȷ��Ϊ",pect,"%"); 
				Sleep(300);
				system("cls");
			}
	} 
	endt=GetTickCount(); 
	score=float(score);
	pec=score/quesnum; 
	pect=pec*100;
	printf("%s%.0f%s%d%s%.2f%s%.2f%s","�������",quesnum,"�⣬�÷�Ϊ",score,",��ȷ��Ϊ",pect,"%,����ʱΪ",(endt-st)/1000,"��");
	Sleep(5000);
	system("exit");
	
	return 0;
} 
