#include "Stack.h"
#include "Queue.h"
#include "LinkedList.h"
#include "HashMap.h"
#include <iostream>

int main() {
    // Test Stack
    Stack<int> s;
    s.push(10); s.push(20); s.push(30);
    std::cout << "Stack top: " << s.top() << "\n";
    s.pop();
    std::cout << "Stack top after pop: " << s.top() << "\n\n";

    // Test Queue
    Queue<int> q;
    q.enqueue(1); q.enqueue(2); q.enqueue(3);
    std::cout << "Queue front: " << q.front() << "\n";
    q.dequeue();
    std::cout << "Queue front after dequeue: " << q.front() << "\n\n";

    // Test LinkedList
    LinkedList<int> ll;
    ll.insert(100); ll.insert(200); ll.insert(300);
    std::cout << "LinkedList contents: ";
    ll.print();
    ll.remove(200);
    std::cout << "After removing 200: ";
    ll.print();
    std::cout << "\n";

    // Test HashMap
    HashMap<std::string, int> map;
    map.insert("Alice", 25);
    map.insert("Bob", 30);
    map.insert("Charlie", 35);
    std::cout << "HashMap contents:\n";
    map.print();
    map.remove("Bob");
    std::cout << "After removing Bob:\n";
    map.print();

    return 0;
}
