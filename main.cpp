#include <iostream>
#include <vector>
#include <string>

using namespace std;

// タスクを表すクラス
class Task
{
private:
    string title;
    string description;
    bool completed;

        public:
        Task(string t, string desc) : title(t), description(desc), completed(false) {}

        void markAsCompleted(){
            completed = true;
        }
        
};