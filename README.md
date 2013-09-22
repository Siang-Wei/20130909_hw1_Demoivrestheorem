##20130909_hw1_Demoivrestheorem


#z=1

```
 #include "stdafx.h"
 #include <iostream>
 #include <cmath>
using namespace std;

int main()
{
	//double i=pow(-1,0.5),z[]={0};
	double pi=3.1416,x,y;
	/*for(int n=0;n<5;n++){                                
		z[n]=cos((n*2*pi/5))+sin(n*(2*pi/5));
		cout << z[n];
	}*/
	for(int n=0;n<5.;n++){
		x=cos((n*2*pi/5));
		cout << x << " ";
	}
	cout << endl;
	for(int n=0;n<5;n++){
		y=sin(n*(2*pi/5));
		cout << y << " ";
	}
	cout << endl;	
	return 0;
}
```

#z=2+3i
```
 #include "stdafx.h"
 #include<iostream>
 #include<cmath>
using namespace std;

int main()
{
	//double i=pow(-1,0.5),z[]={0};
	double pi=3.1416,x,y;
	/*for(int n=0;n<5;n++){                                
		z[n]=cos((n*2*pi/5))+sin(n*(2*pi/5));
		cout << z[n];
	}*/
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
```
