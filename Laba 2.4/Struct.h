#pragma once

using namespace std;
#include <string>

struct kino {
	kino* next;
	kino* prev;
	string name;
	string time;
	int price;
	int people;
};
