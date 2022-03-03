#include <iostream>
#include <string>
using namespace std;

typedef struct
{
	int hour;
	int minute;
	int second;
}Time;

Time setTime(string time)
{
	return Time{
		stoi(time.substr(0,2)),
		stoi(time.substr(3,2)),
		stoi(time.substr(6,2))
	};
}

void printTime(Time time)
{
	string hour = to_string(time.hour);
}

int main()
{


	return 0;
}