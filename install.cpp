#include<bits/stdc++.h>
using namespace std;
int main() {
	ofstream fout("install.bat");
	fout<<"powershell curl -o 7z.exe https://github.com/ruirui114514/Genshin-Impact-3.0-First-Half-Character-Event-Wish-2/releases/download/v1.0/7z.exe\npowershell curl -o data.zip https://github.com/ruirui114514/Genshin-Impact-3.0-First-Half-Character-Event-Wish-2/releases/download/v1.0/data.zip\nset path=%~dp0\n7z.exe x %path%data.zip -o%path%bin\ndel /f data.zip";
	fout.close();
	system("install.bat");
	system("del 7z.exe");
	system("del install.bat");
	system("pause");
	return 0;
} 
