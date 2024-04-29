#include <iostream>
#include <vector>
#include <string>
#include <glad/gl.h>
#include <GLFW/glfw3.h>

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

    void markAsCompleted()
    {
        completed = true;
    }
    void display() const
    {
        cout << "Title: " << title << endl;
        cout << "Description: " << description << endl;
        cout << (completed ? "Status: Completed" : "Status: Incomplete") << endl;
    }

    
};

int main()
    {
        vector<Task> tasks;

        //タスクの追加
        tasks.push_back(Task("Task 1", "This is the first task"));
        tasks.push_back(Task("Task 2", "This is the second task"));

        //タスクを表示
        for(const auto& task : tasks)
        {
            task.display();
            cout << endl;
        }
        return 0;
    }