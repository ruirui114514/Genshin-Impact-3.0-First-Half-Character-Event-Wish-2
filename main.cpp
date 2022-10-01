#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
string a[40]= {"柯莱","迪奥娜","菲谢尔","鹿野院平藏","云堇","久岐忍","九条裟罗","五郎","早柚","班尼特","烟绯","罗莎莉亚","砂糖","托马","重云","诺艾尔","凝光","辛焱","行秋","北斗","香菱","雷泽","芭芭拉","弓藏","祭礼弓","绝弦","西风猎弓","昭心","祭礼残章","流浪乐章","西风秘典","西风长枪","祭礼大剑","钟剑","西风大剑","匣里龙吟","祭礼剑","笛剑","西风剑"};
string wa[6]= {"刻晴","莫娜","七七","迪卢克","琴"};
string san[14]= {"弹弓","神射手之誓","鸦羽弓","翡玉法球","讨龙英杰谭","魔导绪论","黑缨枪","以理服人","沐浴龙血的剑","铁影阔剑","飞天御剑","黎明神剑","冷刃"};
string ben="钟离";
string file;
string ch[11451];
string showj[11];
stringstream com;
char command[70];
int showt[11];

void setcolor(int ForgC, int BackC) {
	WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
}

double qu(double x,double y) {
	int wei=1;
	int t=y;
	while(t!=0) {
		wei*=10;
		t/=10;
	}
	double a=x+y/wei;
	int b=a/100;
	return a-100*b;
}

int main() {
	system("title 原神3.0上半角色活动祈愿-2");
	ifstream fin;
	setcolor(15,0);
	srand(time(0));
	int wai=(rand()%(1 - 0 +1))+0,z=(rand()%(2 - 0 +1))+0,zw=(rand()%(37 - 22 +1))+22,wz=0,wc=0,type[11451],chou=0,l=0,gw=(rand()%(4 - 0 +1))+0,weijin=0,gaoji=0,ziwai=(rand()%(2 - 1 +1))+1,s=(rand()%(12 - 0 +1))+0,f,bf=0,zigai=(rand()%(100-1+1))+1,c,sec=0,cols,lines;
	bool xbd=false,w=false,dbd=false;
	char x,name[1145];
	double xbdg=0,sb,dbdg=0,zgf=0,gai=rand();
	string temp;
	system("@echo off");
	fin.open("setting.txt");
	while(fin>>temp) {
		if(temp=="wait:") fin>>sec;
		if(temp=="cols:") fin>>cols;
		if(temp=="lines:") fin>>lines;
	}
	fin.close();
	com.clear();
	com<<"mode con cols="<<cols<<" lines="<<lines;
	com.getline(command,70);
	system(command);
	fin.open("data",ios::binary);
	if(!fin) {
		cout<<"写下你的名字:";
		cin.getline(name,1145);
	} else {
		fin.read((char*)&name,sizeof(name));
		fin.read((char*)&wz,sizeof(wz));
		fin.read((char*)&wc,sizeof(wc));
		fin.read((char*)&w,sizeof(w));
		fin.read((char*)&x,sizeof(x));
		fin.read((char*)&chou,sizeof(chou));
		fin.read((char*)&l,sizeof(l));
		fin.read((char*)&weijin,sizeof(weijin));
		fin.read((char*)&gaoji,sizeof(gaoji));
		fin.read((char*)&xbd,sizeof(xbd));
		fin.read((char*)&xbdg,sizeof(xbdg));
		fin.read((char*)&f,sizeof(f));
		fin.read((char*)&bf,sizeof(bf));
		fin.read((char*)&sb,sizeof(sb));
		fin.read((char*)&dbd,sizeof(dbd));
		fin.read((char*)&dbdg,sizeof(dbdg));
		fin.read((char*)&zgf,sizeof(zgf));
	}
	fin.close();
	int kaishichou=chou+1;
	int kaishilun=l;
	while(1) {
		for(int i=1; i<=40; i++) {
			cout<<"-";
		}
		sb=(l*180+chou)*16;
		cout<<endl<<endl<<"你好"<<name<<",你已抽"<<l*180+chou<<"抽。"<<endl<<"花费"<<(l*180+chou)*160<<"原石。"<<endl<<"相当于"<<sb<<"元,或"<<fixed<<setprecision(2)<<sb/648<<"个648。"<<endl<<"出了"<<bf<<"个本期五星。"<<endl<<"已歪"<<wc<<"次。"<<endl<<"1.单抽  2.十连  3.偏好设置  4.删除历史并退出  5.保存历史并退出";
		x=getch();
		cout<<endl;
		x-='0';
		if(x==1) {
			f=1;
		}
		if(x==2) {
			f=10;
		}
		if(x==3) {
			ofstream pian("setting.txt",ios::binary);
			cout<<"恢复默认?(y/n)\n";
			x=getch();
			if(x=='y') {
				pian<<"wait: 0\ncols: 114\nlines: 25";
				pian.close();
				sec=0;
				system("pause");
				system("mode con cols=114 lines=25");
				continue;
			}
			cout<<"抽卡动画播放时间(ms):";
			cin>>sec;
			while(!(sec==0||(sec>=1000&&sec<=6400))) {
				cout<<"无效!重输:";
				sec=1;
				cin>>sec;
			}
			pian<<"wait: "<<sec<<endl;
			cout<<"窗口大小(列):";
			cin>>lines;
			pian<<"lines: "<<lines<<endl;
			cout<<"窗口大小(行):";
			cin>>cols;
			pian<<"cols: "<<cols;
			pian.close();
			system("pause");
			com.clear();
			com<<"mode con cols="<<cols<<" lines="<<lines;
			com.getline(command,70);
			system(command);
			system("cls");
			continue;
		}
		if(x==4) {
			system("del data");
			system("del 抽卡记录.txt");
			system("pause");
			return 0;
		}
		if(x==5) {
			ofstream fout("data",ios::binary);
			fout.write((char*)&name,sizeof(name));
			fout.write((char*)&wz,sizeof(wz));
			fout.write((char*)&wc,sizeof(wc));
			fout.write((char*)&w,sizeof(w));
			fout.write((char*)&x,sizeof(x));
			fout.write((char*)&chou,sizeof(chou));
			fout.write((char*)&l,sizeof(l));
			fout.write((char*)&weijin,sizeof(weijin));
			fout.write((char*)&gaoji,sizeof(gaoji));
			fout.write((char*)&xbd,sizeof(xbd));
			fout.write((char*)&xbdg,sizeof(xbdg));
			fout.write((char*)&f,sizeof(f));
			fout.write((char*)&bf,sizeof(bf));
			fout.write((char*)&sb,sizeof(sb));
			fout.write((char*)&dbd,sizeof(dbd));
			fout.write((char*)&dbdg,sizeof(dbdg));
			fout.write((char*)&zgf,sizeof(zgf));
			fout.close();
			fout.open("抽卡记录.txt",ios::app);
			for(int i=(kaishilun*180+kaishichou); i<=(l*180+chou); i++) {
				if(i==0) {
					continue;
				}
				fout<<i<<" "<<ch[i]<<" ( "<<type[i]<<" 星)"<<endl<<endl;
			}
			system("pause");
			return 0;
		}
		if(x>5||x<1) {
			system("cls");
			continue;
		}
		for(int i=1; i<=f; i++) {
			wai=(rand()%(1 - 0 +1))+0;
			s=(rand()%(12 - 0 +1))+0;
			gw=(rand()%(4 - 0 +1))+0;
			z=(rand()%(2 - 0 +1))+0;
			zw=(rand()%(37 - 4 +1))+4;
			gai=qu((rand()%(65535-1+1))+1,(rand()%(65535-1+1))+1);
			zigai=qu((rand()%(65535-1+1))+1,(rand()%(65535-1+1))+1);
			chou++;
			if(chou>=180) {
				chou=0;
				weijin=0;
				w=false;
				l++;
				xbd=false;
				xbdg=100;
				dbd=false;
				dbdg=100;
				wz=0;
				zgf=100;
			}
			if(dbd==false&&w==true&&chou>=143&&chou<=180) {
				dbd=true;
			}
			if(xbd==false&&weijin>=74&&dbd==false) {
				xbd=true;
			}
			if(xbd==true) {
				xbdg=(weijin-73)*6.0-0.6;
				zgf-=35;
			}
			if(dbd==true) {
				dbdg=(weijin-73)*6.0-0.6;
				zgf-=35;
			}
			if(wz<=7) {
				zgf=5.1;
			}
			if(wz==8) {
				zgf=56.1;
			}
			if(wz==9) {
				zgf=100;
			}
			if((gai<=0.6&&xbd==false)||(gai<=xbdg&&xbd==true)||weijin==89) {
				type[(l*180+chou)]=5;
				if(wai==0) {
					ch[(l*180+chou)]=ben;
					bf++;
				} else {
					ch[(l*180+chou)]=wa[gw];
					gaoji=l*180+chou;
					wc++;
					w=true;
				}
				xbd=false;
				dbd=false;
				weijin=0;
				continue;
			}
			if((gai<=dbdg&&dbd==true)||(weijin==89&&dbd==true)) {
				type[(l*180+chou)]=5;
				ch[(l*180+chou)]=ben;
				w=false;
				bf++;
				xbd=false;
				dbd=false;
				weijin=0;
				continue;
			}
			weijin++;
			if(zigai<=zgf) {
				type[(l*180+chou)]=4;
				if(ziwai<=75) {
					ch[(l*180+chou)]=a[z];
					ziwai=(rand()%(100 - 0 +1))+0;
				} else {
					ch[(l*180+chou)]=a[zw];
					ziwai=1;
				}
				wz=0;
				continue;
			}
			type[(l*180+chou)]=3;
			ch[(l*180+chou)]=san[s];
			s=(rand()%(12 - 0 +1))+0;
			wz++;
		}
		for(int i=1; i<=f; i++) {
			showj[i]=ch[i+(l*180+chou)-f];
			showt[i]=type[i+(l*180+chou)-f];
		}
		for(int i=1; i<f; i++) {
			for(int j=f; j>i; j--) {
				if(showt[j]>showt[j-1]) {
					swap(showt[j],showt[j-1]);
					swap(showj[j],showj[j-1]);
				}
			}
		}
		cout<<endl;
		if(showt[1]==5&&f==1) {
			file="1g.mp4";
		} else if(showt[1]==5&&f==10) {
			file="10g.mp4";
		} else if(showt[1]==4&&f==1) {
			file="1p.mp4";
		} else if(showt[1]==4&&f==10) {
			file="10p.mp4";
		} else {
			file="1b.mp4";
		}
		if(sec>=500) {
			com.clear();
			com<<"start ";
			com<<file;
			com.getline(command,70);
			system(command);
			Sleep(sec);
			system("taskkill /f /im Video.UI.exe");
			cout<<endl;
		}
		for(int i=1; i<=f; i++) {
			if(showt[i]==3) {
				setcolor(11,0);
				cout<<showj[i]<<"(3) ";
			}
			if(showt[i]==4) {
				setcolor(13,0);
				cout<<showj[i]<<"(4) ";
			}
			if(showt[i]==5) {
				setcolor(6,0);
				cout<<showj[i]<<"(5) ";
			}
			setcolor(15,0);
		}
		cout<<endl<<endl;
		system("pause");
		system("cls");
	}
}
