#include<bits/stdc++.h>
using namespace std;
int main() {
	ofstream fout("setup.bat");
	fout<<"powershell curl -o 7z.exe https://ghproxy.com/https://github.com/ruirui114514/Genshin-Impact-3.0-First-Half-Character-Event-Wish-2/releases/download/v1.0/7z.exe\npowershell curl -o 7z.dll https://ghproxy.com/https://github.com/ruirui114514/Genshin-Impact-3.0-First-Half-Character-Event-Wish-2/releases/download/v1.0/7z.dll\npowershell curl -o data.zip https://ghproxy.com/https://github.com/ruirui114514/Genshin-Impact-3.0-First-Half-Character-Event-Wish-2/releases/download/v1.0/data.zip\nset path=%~dp0\n7z.exe x %path%data.zip -o%path%bin\ndel /f data.zip\ndel 7z.exe\ndel 7z.dll\nexit";
	fout.close();
	system("start setup.bat");
	return 0;
} 
