#include <bits/stdc++.h>
using namespace std;

class StudentRecord{
private:
    string studentName;
    string rollNumber;

public:
    string get_studentName();      
    void set_studentName(string Name);

    string get_rollNumber();
    void set_rollNumber(string rollnum);
};

class Node{
private:
	Node* next;
	StudentRecord* element;
public:
    Node* get_next();
    StudentRecord* get_element();

    void set_next(Node* value);
    void set_element(StudentRecord* student);

};

class Entity {
private:
    string name;
    Node* iterator;

public:
    string get_name();
    void set_name(string Name);
    Node* get_iterator();
    void set_iterator(Node* iter);
};

vector<StudentRecord> students;
vector<LinkedList> EntityArray;

class LinkedList : public Entity {
    // Implement LinkedList members here
public:
    void add_student(StudentRecord &student);
    void delete_student(string studentName);
};

void read_input_file(string file_path);

