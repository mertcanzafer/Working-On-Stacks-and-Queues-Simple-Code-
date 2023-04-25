#include <iostream>
#include <stack>
#include <string>
#include <cstdlib>
#include<ctime>
#include<queue>

using namespace std;


/* Basic Operations on Stack
   1. push() to insert an element into the stack
   2. pop() to remove an element from the stack
   3. top() Returns the top element of the stack.
   4. isEmpty() returns true if stack is empty else false.
   5. size() returns the size of stack.
*/



/* Basic Operations on Queue
   1. push() inserts an element at the back of the queue
   2. pop() removes an element from the front of the queue
   3. Empty() returns true if queue is empty else false.
   4. size() returns true if the queue is empty
   5. front() returns the first element of the queue
   6. back() returns the last element of the queue
 */




void Myscores(stack<int>& Mystack)
{
	while (!Mystack.empty())
	{
		cout << "My scores - " << Mystack.top() << endl;
		Mystack.pop();
	}

}


void Table(queue<int>& Myqueue)
{
	int i = 0;
	while (!Myqueue.empty())
	{
		cout << ++i << ". " << Myqueue.front()<<endl;
		Myqueue.pop();
	}

}


int main()
{
	stack<int> Myscore;
	Myscore.push(50);
	Myscore.push(80);
	Myscore.push(110);
	Myscore.push(67);
	Myscore.push(99);
	Myscore.push(54);

	Myscores(Myscore);

	if (Myscore.size() == 0)
	{
		cout << "Your stack is empty for now!!!" << endl;
	}
	else {
		Myscore.pop();
	}
	

	queue<int>InspectionOrder;

	InspectionOrder.push(117);
	InspectionOrder.push(220);
	InspectionOrder.push(100);
	InspectionOrder.push(242);
	InspectionOrder.push(136);
	InspectionOrder.push(106);

	Table(InspectionOrder);


	if (InspectionOrder.size() == 0)
	{
		cout << "Your queue is empty for now!!!" << endl;
	}
	else {
		InspectionOrder.pop();
	}


	cout << endl;
	return 0;
}
