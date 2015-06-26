// ConsoleApplication1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
   int x, y;

   x = 1;
   y = 2;
      
   cout << x + y << endl;

   cout << y - x << endl;

   int z;

   z = x + y;
   
   cout << z << endl;

   return 0;
}

