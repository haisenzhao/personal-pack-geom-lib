#include <iostream>
#include <windows.h>
#include <tchar.h>
#include <string.h>
#include <stdio.h>
#include <tchar.h>
#include <stdio.h>
#include <tchar.h>
#include <windows.h>
#include <vector>
#include <set>
#include <stdexcept>
#include <cstring>
#include <cstdlib>
#include <ostream>
#include <functional>
#include <queue>
#include <sstream>
#include <math.h>
#include <fstream>
#include "cgal.h"


using namespace std;
//Some necessary CGAL functions encapsulated in the dll (mydll.dll)
typedef void(*CGAL_Vector_Base)(Vector3d n, Vector3d& result);

using namespace std;

int main()
{

	HMODULE hModule = Functs::LoadHMODULE("carpentry_geom.dll");

	auto read_mesh = (CGAL_Vector_Base)GetProcAddress(hModule, "CGAL_Vector_Base");
	Vector3d result;
	read_mesh(Vector3d(1.0, 323.0, 0.0), result);
	std::cerr << result[0] << " " << result[1] << " " << result[2] << std::endl;
	system("pause");
}

