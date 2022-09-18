#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
string a[40]={"柯莱","迪奥娜","菲谢尔","鹿野院平藏","云堇","久岐忍","九条裟罗","五郎","早柚","班尼特","烟绯","罗莎莉亚","砂糖","托马","重云","诺艾尔","凝光","辛焱","行秋","北斗","香菱","雷泽","芭芭拉","弓藏","祭礼弓","绝弦","西风猎弓","昭心","祭礼残章","流浪乐章","西风秘典","西风长枪","祭礼大剑","钟剑","西风大剑","匣里龙吟","祭礼剑","笛剑","西风剑"};
string wa[6]={"刻晴","莫娜","七七","迪卢克","琴"};
string san[14]={"弹弓","神射手之誓","鸦羽弓","翡玉法球","讨龙英杰谭","魔导绪论","黑缨枪","以理服人","沐浴龙血的剑","铁影阔剑","飞天御剑","黎明神剑","冷刃"};
string ben="钟离";
string ch[11451];
string showj[11];
int showt[11]; 
void setcolor(int ForgC, int BackC) {
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}
int main()
{
	ifstream fin("1.dat");
	setcolor(15,0);
	srand(time(0));
	int wai=(rand()%(1 - 0 +1))+0,gai=(rand()%(100 - 0 +1))+0,z=(rand()%(2 - 0 +1))+0,zw=(rand()%(37 - 22 +1))+22,wz=0,wc=0,type[11451];
	bool w=false;
	int x,chou=0,l=0,gw=(rand()%(4 - 0 +1))+0,weijin=0;
	int gaoji=0,ziwai=(rand()%(2 - 1 +1))+1;
	bool xbd=false;
	int s=(rand()%(12 - 0 +1))+0,f,bf=0,xun=0,xg=100,dg=100,dbdg=100,zg=100,zgf=100;
	bool dbd=false,zbd=false;
	char oops;
	double sb;
	int c;
	system("@echo off");
	string ww="--";
	string name="\0";
	char yiyi;
	string siwu;
	int xbdg=100;
	fin>>name>>wz>>wc>>w>>x>>chou>>l>>weijin>>gaoji>>xbd>>xg>>xbdg>>f>>bf>>xun>>sb>>ww>>dbd>>dbdg>>dg>>zbd>>zg>>zgf;
	int kaishichou=chou+1;
	int kaishilun=l;
	fin.close();
	if(name=="\0")
	{
		cout<<"写下你的名字:"; 
		cin>>name;
		kaishichou=1;
		kaishilun=0;
		while(system("notepad.exe README.MD"))
		{
		
		}
	}
	while(1)
	{
		for(int i=1;i<=40;i++)
		{
			cout<<"-";
		}
		sb=(l*180+chou)*16;
		cout<<endl<<endl<<"你好"<<name<<",你已抽"<<l*180+chou<<"抽。"<<endl<<"花费"<<(l*180+chou)*160<<"原石。"<<endl<<"相当于"<<sb<<"元,或"<<fixed<<setprecision(2)<<sb/648<<"个648。"<<endl<<"出了"<<bf<<"个本期五星。第"<<xun<<"抽出的。"<<endl<<"已歪"<<wc<<"次。第"<<gaoji<<"抽歪的 "<<ww<<"。"<<endl<<"1.单抽  2.十连  3.删除历史并退出  4.保存历史并退出";
		cin>>x;
		cout<<endl;
		if(x==1)
		{
			f=1;
		}
		if(x==2)
		{
			f=10;
		}
		if(x==3)
		{
			system("del 1.dat");
			system("del 抽卡记录.txt");
			system("pause");
			return 0;
		}
		if(x==4)
		{
			ofstream fout("1.dat");
			fout<<name<<" "<<wz<<" "<<wc<<" "<<w<<" "<<x<<" "<<chou<<" "<<l<<" "<<weijin<<" "<<gaoji<<" "<<xbd<<" "<<xg<<" "<<xbdg<<" "<<f<<" "<<bf<<" "<<xun<<" "<<sb<<" "<<ww<<" "<<dbd<<" "<<dbdg<<" "<<dg<<" "<<zbd<<" "<<zg<<" "<<zgf;
			fout.close();
			ifstream in("抽卡记录.txt");
			string choukajilu[1145];
			c=1;
			while(getline(in,choukajilu[c]))
			{
				++c;
			}
			in.close();
			ofstream out("抽卡记录.txt");
			for(int i=1;i<c;i++)
			{
				out<<choukajilu[i];
				if(i!=c-1)
				{
					out<<endl;
				}
			}
			out<<endl;
			for(int i=(kaishilun*180+kaishichou);i<=(l*180+chou);i++)
			{
				if(i==0)
				{
					continue;
				}
				out<<i<<" "<<ch[i]<<" ( "<<type[i]<<" 星)"<<endl<<endl;
			}
			system("pause");
			return 0;
		}
		if(x>4||x<1)
		{
			cout<<"选项不存在!";
			f=0;
		}
		for(int i=1;i<=f;i++)
		{
			wai=(rand()%(1 - 0 +1))+0;
			s=(rand()%(12 - 0 +1))+0;
			gw=(rand()%(4 - 0 +1))+0;
			z=(rand()%(2 - 0 +1))+0;
			zw=(rand()%(37 - 4 +1))+4;
			gai=(rand()%(100 - 0 +1))+0;
			chou++;
			if(chou>=180)
			{
				chou=0;
				weijin=0;
				w=false;
				l++;
				xbd=false;
				xg=100;
				xbdg=100;
				dbd=false;
				dg=100;
				dbdg=100;
				wz=0;
				zbd=false;
				zg=100;
				zgf=100;
			}
			if(dbd==false&&w==true&&chou>=143&&chou<=180)
			{
				dbd=true;
			}
			if(xbd==false&&weijin>=73&&dbd==false)
			{
				xbd=true;
			}
			if(zbd=false&&wz>=7)
			{
				zbd=true;
			}
			if(xbd==true)
			{
				xbdg-=15;
				xg=(rand()%(xbdg-0+1))+0;
			}
			if(dbd==true)
			{
				dbdg-=15;
				dg=(rand()%(dbdg-0+1))+0;
			}
			if(zbd==true)
			{
				zgf-=75;
				zg=(rand()%(zgf-0+1))+0;
				
			}
			if(/*gai<=0.6||*/(xg<=35&&xbd==true))
			{
				type[(l*180+chou)]=5;
				if(wai==0)
				{
					ch[(l*180+chou)]=ben;
					xun=l*180+chou;
					bf++;
				}
				else
				{
					ch[(l*180+chou)]=wa[gw];
					ww=wa[gw];
					gaoji=l*180+chou;
					wc++;
					w=true;
				}
				xbd=false;
				dbd=false;
				weijin=0;
				continue;
			}
			if(dg<=20&&dbd==true)
			{
				type[(l*180+chou)]=5;
				ch[(l*180+chou)]=ben;
				xun=l*180+chou;
				w=false;
				bf++;
				xbd=false;
				dbd=false;
				weijin=0;
				continue;
			}
			weijin++;
			if((zg<=75&&zbd==true)||(gai>0.6&&gai<=12.6)||wz>=9)
			{
				type[(l*180+chou)]=4;
				if(ziwai<=75)
				{
					ch[(l*180+chou)]=a[z];
					ziwai=(rand()%(100 - 0 +1))+0;
				}
				else
				{
					ch[(l*180+chou)]=a[zw];
					ziwai=1;
				}
				wz=0;
				zbd=false;
				continue;
			}
			type[(l*180+chou)]=3;
			ch[(l*180+chou)]=san[s];
			s=(rand()%(12 - 0 +1))+0;
			wz++;
		}
		for(int i=1;i<=f;i++)
		{
			showj[i]=ch[i+(l*180+chou)-f];
			showt[i]=type[i+(l*180+chou)-f];
		}
		for(int i=1;i<f;i++)
		{
			for(int j=f;j>i;j--)
			{
				if(showt[j]>showt[j-1])
				{
					swap(showt[j],showt[j-1]);
					swap(showj[j],showj[j-1]);
				}
			}
		}
		cout<<"跳过动画?(y/n)";
		cin>>oops;
			if(showt[1]==5&&f==1&&oops=='n')
			{
				system("start 1g.mp4");
				_sleep(6400);
				system("taskkill /f /im Video.UI.exe");
				cout<<endl;
			}
			else if(showt[1]==5&&f==10&&oops=='n')
			{
				system("start 10g.mp4");
				_sleep(6400);
				system("@echo off");
				system("taskkill /f /im Video.UI.exe");
				cout<<endl;
			}
			else if(showt[1]==4&&f==1&&oops=='n')
			{
				system("start 1p.mp4");
				_sleep(6400);
				system("@echo off");
				system("taskkill /f /im Video.UI.exe");
				cout<<endl;
			}
			else if(showt[1]==4&&f==10&&oops=='n')
			{
				system("start 10p.mp4");
				_sleep(6400);
				system("@echo off");
				system("taskkill /f /im Video.UI.exe");
				cout<<endl;
			}
			else
			{
				if(oops=='n')
				{
					system("start 1b.mp4");
					_sleep(6400);
					system("@echo off");
					system("taskkill /f /im Video.UI.exe");
					cout<<endl;
				}
			}
		_sleep(200);
		for(int i=1;i<=f;i++)
		{
			if(showt[i]==3)
			{
				setcolor(11,0);
				cout<<showj[i]<<"(3) ";
			}
			if(showt[i]==4)
			{
				setcolor(13,0);
				cout<<showj[i]<<"(4) ";
			}
			if(showt[i]==5)
			{
				setcolor(6,0);
				cout<<showj[i]<<"(5) ";
			}
			setcolor(15,0);
		}
		cout<<endl<<endl;
	}
}
