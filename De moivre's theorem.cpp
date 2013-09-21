// De moivre's theorem.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
//	double i=pow(-1,0.5);
	double z[]={0},pi=3.1416,x,y;
	/*for(int n=0;n<5;n++){
		z[n]=cos((n*2*pi/5))+sin(n*(2*pi/5));
		cout << z[n];
	}*/
	//cout << endl;
	for(int n=0;n<5.;n++){
		x=pow(13,0.1)*cos(56.31/5+n*(2*pi/5));
		cout << x << " ";
	}
	cout << endl;
	for(int n=0;n<5;n++){
		y=pow(13,0.1)*sin(56.31/5+n*(2*pi/5));
		cout << y << " ";
	}
	cout << endl;	
	return 0;
}
/*	ofstream fs("abc.txt",fstream::out);
	if(!fs)
	cout << "開檔失敗";
	for(int i=0;i<5;i++){
	//	fs<<z[i]<<",";
	//	fs<<endl<<x<<",";
	//	fs<<endl<<y<<",";
	}*/
