#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        long long int roll;
        int marks;
        Student(string name, long long int roll, int marks){
            this->name=name;
            this->roll=roll;
            this->marks=marks;
        }
};

class cmp{
    public:
         bool operator()(Student s1, Student s2)
    {
        if (s1.marks == s2.marks)
            return s1.roll > s2.roll;
        else
            return s1.marks < s2.marks;
    }
};

int main(){
    int n;
    cin>>n;
    priority_queue<Student, vector<Student>, cmp > pq;
    for (int i = 0; i < n; i++)
    {
            string name;
            long long int roll;
            int marks;
            cin>>name>>roll>>marks;
            Student obj(name,roll,marks);
            pq.push(obj);
            
    }

    cin>>n;
    while (n--)
    {
        int x;
        cin>>x;
        if(x==0){
            string name;
            long long int roll;
            int marks;
            cin>>name>>roll>>marks;
            Student obj(name,roll,marks);
            pq.push(obj);
            cout<< pq.top().name <<" "<< pq.top().roll<<" "<< pq.top().marks<<endl;
            
            
        }else if (x== 1)
        {
            //check if empty
            if (!pq.empty()){
            cout<< pq.top().name <<" "<< pq.top().roll<<" "<< pq.top().marks<<endl;
            }else{
                    cout<<"Empty"<<endl;

            }
        }else if (x == 2)
        {
            if (!pq.empty())
            {
                pq.pop();
                if (!pq.empty())
                {
                    cout<< pq.top().name <<" "<< pq.top().roll<<" "<< pq.top().marks<<endl;
                }
                else 
                {
                    cout<<"Empty"<<endl;
                }
            }
            else 
            {
                cout<<"Empty"<<endl;
            }

        }
        
        
    }
    
    return 0;
}