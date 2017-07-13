#include "test.h"
#include <iostream>
#include <string>
#include "zyalg.h"
#include "zyvector.h"
#include "zylist.h"

void TestVector(void)
{
	std::cout << "*****zyvector<int>****************" << std::endl;
	zy::zyvector<int> zvii{ 1, 2, 3, 4, 5 , 6, 7, 8, 9, 0 };
	zy::zyvector<int> zvi;
	//std::vector<int> vi{ 1,2,3,4,5,6,7,8,9,0 };
	//show({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 });
	zy::Print(zvi, std::cout);
	std::cout << "size: " << zvi.size() << std::endl;
	std::cout << "capacity: " << zvi.capacity() << std::endl;

	zvi.push_back(11);
	zy::Print(zvi, std::cout);
	std::cout << "size: " << zvi.size() << std::endl;
	std::cout << "capacity: " << zvi.capacity() << std::endl;

	zvi.pop_back();
	zy::Print(zvi, std::cout);
	std::cout << "size: " << zvi.size() << std::endl;
	std::cout << "capacity: " << zvi.capacity() << std::endl;

	zvi.resize(50);
	zy::Print(zvi, std::cout);
	std::cout << "size: " << zvi.size() << std::endl;
	std::cout << "capacity: " << zvi.capacity() << std::endl;

	zvi.resize(12);
	zy::Print(zvi, std::cout);
	std::cout << "size: " << zvi.size() << std::endl;
	std::cout << "capacity: " << zvi.capacity() << std::endl;

	zvi.reserve(200);
	zy::Print(zvi, std::cout);
	std::cout << "size: " << zvi.size() << std::endl;
	std::cout << "capacity: " << zvi.capacity() << std::endl;

	zvi.reserve(2);
	zy::Print(zvi, std::cout);
	std::cout << "size: " << zvi.size() << std::endl;
	std::cout << "capacity: " << zvi.capacity() << std::endl;
	std::cout << "*****zyvector<int>****************" << std::endl;

	std::cout << "*****zyvector<std::string>****************" << std::endl;

	zy::zyvector<std::string> zvstr = { "zhang", "ying", "data", "structures" };
	zy::Print(zvstr, std::cout);
	std::cout << "size: " << zvstr.size() << std::endl;
	std::cout << "capacity: " << zvstr.capacity() << std::endl;

	zy::zyvector<std::string> zvs(std::move(zvstr));
	zy::Print(zvs, std::cout);
	std::cout << "size: " << zvs.size() << std::endl;
	std::cout << "capacity: " << zvs.capacity() << std::endl;

	std::cout << zvs[1] << std::endl;

	std::cout << "*****zyvector<std::string>****************" << std::endl;
}

void TestList(void)
{
	std::cout << "************zy::list<int>**********************" << std::endl;
	zy::list<int> li1;
	zy::list<int> li2{ 1, 2/*, 3, 4, 5, 6, 7, 8, 9 , 0*/ };
	zy::Print(li2, std::cout);
	std::cout << "************zy::list<int>**********************" << std::endl;
}
