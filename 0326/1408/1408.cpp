#include <iostream>
#include <string>
using namespace std;

struct Time
{
	int hour;
	int minute;
	int second;
};

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
	string minute = to_string(time.minute);
	string second = to_string(time.second);

	hour = hour.length() == 1 ? '0' + hour : hour;
	minute = minute.length() == 1 ? '0' + minute : minute;
	second = second.length() == 1 ? '0' + second : second;

	cout << hour << ":" << minute << ":" << second << "\n";
}

int main()
{
	string nowTime, startTime;
	cin >> nowTime >> startTime;

	Time now = setTime(nowTime);
	Time start = setTime(startTime);
	Time result;


	if (now.hour > start.hour)
	{
		start.hour += 24;
	}
	if (now.minute > start.minute)
	{
		start.hour--;
		start.minute += 60;
	}
	if (now.second > start.second)
	{
		start.minute--;
		start.second += 60;
	}

	result.hour = start.hour - now.hour;
	result.minute = start.minute - now.minute;
	result.second= start.second - now.second;

	printTime(result);

	return 0;
}