#include <iostream>
using namespace std;
class person
{
private:
	string firstname;
	string lastname;
	protected:
		int age;
		public:
			void person1()
			{
			cout<<"first name"<<endl;
			cin>>firstname;
			cout<<"last name"<<endl;
			cin>>lastname;
			cout<<"age"<<endl;
			cin>>age;
			}
			void display()
			{
				cout<<"first name"<<firstname << endl;
				cout<<"last name"<<lastname<< endl;
			}
		};
		class student:public person
		{
		protected:
			float cgpa;
            public:
			void student1()
			{
				cout<<"CGPA"<<endl;
				cin>>cgpa;
			}
			void displaystudent()
			{
				cout<<"CGPA"<<cgpa<<endl;
		
			}
		};
		class undergraduate:public student
		{
		private:
		string fyp_name;
        public:
		void undergraduated()
		{
			cout<<"FYP"<<endl;
			cin>>fyp_name;
		}
		void displayundergraduate()	
		{
			student::displaystudent();
			cout<<"FYP"<<fyp_name;
		}	
		};
		class graduate:public student
		{
		private:
		string thesis_topic;
		public:
			void graduated()
		{	cout<<"thesis topic"<<endl;
			cin>>thesis_topic;
		}
			void displaygraduate()
			{
            student::displaystudent();
			cout<<"thesis topic"<<thesis_topic<<endl;
		}
	};
class faculty:public person
{
private:
	int course_count;
	int telephone_extension;
	public:
		void fun()
		{
			cout<<"no of courses"<<endl;
			cin>>course_count;
			cout<<"no of telephone extension"<<endl;
			cin>>telephone_extension;
		}};
		int main()
		{
			person a;
            a.person1();
			a.display();
		}