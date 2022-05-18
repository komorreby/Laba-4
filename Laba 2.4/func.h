#pragma once
#include<string>
#include"Struct.h"

void addInEnd(kino*& begin, string name, string time, int price, int people);
void output(kino* ptr);
void edit(kino*& ptr, string N, string new_name, string new_time, int new_price, int new_people);
void del(kino*& begin, string N);
void find(kino*& ptr, string N);
void Save(kino* ptr, kino* head, string file);
void Print(kino* ptr, kino* head, string file);