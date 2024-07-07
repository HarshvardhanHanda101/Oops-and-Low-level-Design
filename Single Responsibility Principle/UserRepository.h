#if !defined(USERREPOSITORY_H)
#define USERREPOSITORY_H
#include<iostream>
#include<unordered_map>
#include<string>


using namespace std;
class UserRepository{

public:
unordered_map<string,string>EmailDatabase;
unordered_map<string,string>DOBDatabase;
unordered_map<string,int>UserIdDatabase;

};
#endif