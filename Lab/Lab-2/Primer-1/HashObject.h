#pragma once
#include <iostream>
using namespace std;
class HashObject
{
private:
	char* key; // jmbg
	char* ime;
	char* prezime;
	char* adresa;
	void allocateMemory(const char* k, const char* i, const char* p, const char* a);
public:
	HashObject();
	HashObject(const char* k, const char* i, const char* p, const char* a);
	HashObject(HashObject const& obj);
	~HashObject();
	HashObject& operator = (HashObject const& obj);
	bool operator == (HashObject const& obj);
	
	void deleteRecord();
	char* getKey() { return key; }

	char* getIme() { return ime; }
	char* getPrezime() { return prezime; }
	char* getAdresa() { return adresa; }

	bool isEqualKey(char* k) { return strcmp(key,k)==0; }
	void print();
};