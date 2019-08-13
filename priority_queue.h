#ifndef PRIORITY_QUEUE_H_
#define PRIORITY_QUEUE_H_

#include <queue>

/* 
  TemplatePriorityQueue : Priority Queue Implementation Class
  members :
  empty(): check if it is empty
  top(): return top item
  size(): return the size of queue
  push(): add new item
  pop(): delete a top item
*/

template <typename T> 
class TemplatePriorityQueue {
 public:
  TemplatePriorityQueue();
  ~TemplatePriorityQueue();
  bool empty() const;
  const T& top() const;
  int size();
  void push(const T&);
  void pop();	

 private:
  std::priority_queue<T> storage;
};

#endif // PRIORITY_QUEUE_H_
