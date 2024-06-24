#include <iostream>

using namespace std;

class employee{
protected:
     string name;
     int eid;
     
  public :
  employee(string empname,int empid) : name(empname),eid(empid){
  }
  
  void display(){
      cout<<"Employee :"<<name<<",ID : "<<eid<<endl;
  }
};

//SINGLE INHERITANCE
class developer : public employee{
    protected :
    string programminglanguage;
    
    public :
    developer(string empname,int empid,string proglang) : employee(empname , empid),programminglanguage(proglang){
    }
    void show(){
        display();
        cout<<"specialization : developer,programming language : "<<programminglanguage<<endl;
    }
};

class teamlead{
    protected :
    int teamsize;
    
    public:
    teamlead(int size):teamsize(size){}
    void teamlead(){
        cout<<"This is the best team"<<endl;
    }
    
};

class projectmanager{
    protected:
    string projectmanager;
    
    public:
    projectmanager(string name) : projectmanager(name){}
    void management(){
        cout<<"This shows the working of management"<<endl;
    }
};

//Multiple INHERITANCE
class Techlead : public teamlead , public projectmanager{
    public:
    techlead(string name,int size) : projectmanager(name) , teamlead(size){}
    void displayinfo{
        management();
        teamlead();
    }
        
    
};

int main(){
    return 0;
}